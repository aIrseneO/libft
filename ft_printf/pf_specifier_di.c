/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_specifier_di.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 09:07:15 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/11 01:53:36 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*pf_ad_precis(char *str, t_format *fpara, size_t n, short int signe)
{
	char	*s;
	int		precision;

	if (fpara->dot == '.' && fpara->precision >= 0)
		precision = fpara->precision;
	else if (fpara->flags[4] == '0' && fpara->flags[0] != '-')
		precision = fpara->width
			- (signe == -1 || fpara->flags[1] == '+' || fpara->flags[2] == ' ');
	else
		return (str);
	if ((int)n < precision)
	{
		s = (char *)malloc(sizeof(*s) * (precision + 1));
		if (s == NULL)
		{
			free(str);
			return (NULL);
		}
		n = (size_t)precision - n;
		s = ft_memset(s, '0', n);
		ft_strcpy(s + n, str);
		free(str);
		return (s);
	}
	return (str);
}

static char	*pf_begin(char *s, t_format *fpara, short int signe)
{
	size_t	n;
	char	*t;
	char	c;

	if (signe == -1)
		c = '-';
	else if (fpara->flags[1] == '+')
		c = '+';
	else if (fpara->flags[2] == ' ')
		c = ' ';
	else
		return (s);
	n = ft_strlen(s);
	t = (char *)malloc(sizeof(*t) * (n + 2));
	if (t == NULL)
	{
		free(s);
		return (NULL);
	}
	t[0] = c;
	ft_memmove(t + 1, s, n + 1);
	free(s);
	return (t);
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

static int	pf_str(t_format *fpara, int n, short int signe)
{
	char	*str;

	if (n == -2147483648)
		str = ft_strdup("2147483648");
	else
		str = ft_itoa(n * signe);
	if (str == NULL)
		return (-1);
	str = pf_ad_precis(str, fpara, ft_strlen(str), signe);
	if (str == NULL)
		return (-1);
	str = pf_begin(str, fpara, signe);
	if (str == NULL)
		return (-1);
	return (pf_put(str, ft_strlen(str), fpara));
}

int	pf_specifier_di(va_list args, t_format *fpara)
{
	char		*str;
	short int	signe;
	int			n;

	n = va_arg(args, int);
	signe = 1;
	if (n < 0)
		signe = -1;
	if (!n && fpara->dot == '.' && !fpara->precision)
	{
		str = ft_strdup("");
		if (str == NULL)
			return (-1);
		str = pf_begin(str, fpara, signe);
		n = 0;
		if (fpara->flags[1] == '+' || fpara->flags[2] == ' ')
			n = 1;
		return (pf_put(str, n, fpara));
	}
	return (pf_str(fpara, n, signe));
}
