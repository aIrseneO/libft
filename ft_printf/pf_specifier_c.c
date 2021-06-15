/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "ft_printf.h"

int	pf_specifier_c(va_list args, t_format *fpara)
{
	int		n;
	char	c;

	c = va_arg(args, int);
	if (fpara->width > 1)
	{
		n = fpara->width - 1;
		if (fpara->flags[0] == '-')
		{
			write(1, &c, 1);
			while (n--)
				write(1, " ", 1);
			return (fpara->width);
		}
		while (n--)
			write(1, " ", 1);
		write(1, &c, 1);
		return (fpara->width);
	}
	write(1, &c, 1);
	return (1);
}
