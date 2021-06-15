/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "ft_printf.h"

static int	pf_put(char *str, int n, t_format *fpara)
{
	char	c_for_0_undefined_behavior;

	c_for_0_undefined_behavior = ' ';
	if (fpara->flags[4] == '0')
		c_for_0_undefined_behavior = '0';
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
			write(1, &c_for_0_undefined_behavior, 1);
		ft_putstr_fd(str, 1);
		free(str);
		return (fpara->width);
	}
	ft_putstr_fd(str, 1);
	free(str);
	return (n);
}

int			pf_specifier_s(va_list args, t_format *fpara)
{
	size_t	len;
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	str = ft_strdup(str);
	if (str == NULL)
		return (-1);
	len = ft_strlen(str);
	if (fpara->dot == '.' && fpara->precision >= 0
		&& fpara->precision < (int)len)
	{
		str[fpara->precision] = '\0';
		len = fpara->precision;
	}
	return (pf_put(str, (int)len, fpara));
}
