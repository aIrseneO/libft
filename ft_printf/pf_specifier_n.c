/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "ft_printf.h"

int	pf_specifier_n(va_list args, int ct)
{
	int		*count;

	count = va_arg(args, int *);
	*count = ct;
	return (0);
}
