/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_specifier_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:56:20 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/11 02:43:45 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*pf_utoa(unsigned int nb)
{
	int				len;
	char			*str;
	unsigned int	n;

	len = 1;
	n = nb;
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (nb >= 10)
	{
		str[--len] = nb % 10 + 48;
		nb /= 10;
	}
	str[--len] = nb % 10 + 48;
	return (str);
}

static char	*pf_add_precision(char *str, t_format *fpara, size_t n)
{
	char	*s;
	int		i;
	int		precision;

	if (fpara->dot == '.' && fpara->precision >= 0)
		precision = fpara->precision;
	else if (fpara->flags[4] == '0' && fpara->flags[0] != '-')
		precision = fpara->width;
	else
		return (str);
	if ((int)n < precision)
	{
		s = (char *)malloc(sizeof(*s) * (precision + 1));
		if (s == NULL)
			return (NULL);
		n = (size_t)precision - n;
		s = ft_memset(s, '0', n);
		i = 0;
		while (str[i])
			s[n++] = str[i++];
		s[n] = '\0';
		free(str);
		return (s);
	}
	return (str);
}

static int	pf_put(char *str, int n, t_format *fpara)
{
	if (fpara->width > n)
	{
		n = fpara->width - n;
		if (fpara->flags[0] == '-')
		{
			ft_putstr_fd(str, 1);
			while (n--)
				write(1, " ", 1);
			free(str);
			return (fpara->width);
		}
		while (n--)
			write(1, " ", 1);
		ft_putstr_fd(str, 1);
		free(str);
		return (fpara->width);
	}
	ft_putstr_fd(str, 1);
	free(str);
	return (n);
}

int	pf_specifier_u(va_list args, t_format *fpara)
{
	char			*str;
	unsigned int	n;

	n = va_arg(args, unsigned int);
	if (!n && fpara->dot == '.' && !fpara->precision)
	{
		str = ft_strdup("");
		if (str == NULL)
			return (-1);
		return (pf_put(str, 0, fpara));
	}
	str = pf_utoa((unsigned int)n);
	if (str == NULL)
		return (-1);
	str = pf_add_precision(str, fpara, ft_strlen(str));
	if (str == NULL)
	{
		free(str);
		return (-1);
	}
	return (pf_put(str, ft_strlen(str), fpara));
}
