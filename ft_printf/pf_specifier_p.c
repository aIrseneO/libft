/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "ft_printf.h"

static char					*pf_str(char **str, int i)
{
	*str = (char *)malloc(sizeof(**str) * (i + 1));
	if (*str == NULL)
		return (NULL);
	(*str)[0] = '0';
	(*str)[1] = 'x';
	(*str)[i] = '\0';
	return (*str);
}

static char					*pf_utoa_hex(unsigned long long int nbr,
								t_format *fpara)
{
	char					*str;
	unsigned int			i;
	unsigned long long int	j;

	i = 1;
	j = nbr;
	while (j >= 16)
	{
		j /= 16;
		i++;
	}
	i += 2 - (!nbr && !fpara->precision && fpara->dot == '.');
	if (pf_str(&str, i) == NULL)
		return (NULL);
	while (i > 2)
	{
		j = nbr % 16;
		if (j < 10)
			str[--i] = j + 48;
		else
			str[--i] = j % 10 + 'a';
		nbr /= 16;
	}
	return (str);
}

static char					*pf_add_precision_undef_beh(char *str,
								t_format *fpara, int n)
{
	char					*s;
	int						nbr;

	if (!(fpara->dot == '.' && fpara->precision > n - 2))
		return (str);
	nbr = fpara->precision + 2;
	s = (char *)malloc(sizeof(*s) * (nbr + 1));
	if (s == NULL)
	{
		free(str);
		return (NULL);
	}
	s[0] = '0';
	s[1] = 'x';
	ft_memset(s + 2, '0', fpara->precision - (n - 2));
	ft_strcpy(s + fpara->precision - n + 4, str + 2);
	free(str);
	return (s);
}

static int					pf_put(char *str, int n, t_format *fpara)
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

int							pf_specifier_p(va_list args, t_format *fpara)
{
	char					*str;

	str = pf_utoa_hex(va_arg(args, unsigned long long int), fpara);
	if (str == NULL)
		return (-1);
	str = pf_add_precision_undef_beh(str, fpara, ft_strlen(str));
	if (str == NULL)
		return (-1);
	return (pf_put(str, (int)ft_strlen(str), fpara));
}
