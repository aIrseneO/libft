/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "ft_printf.h"

int	pf_putargs4(va_list args, t_format *fpara, int ct)
{
	int	n;

	n = -1;
	if (fpara->specifier == 'c')
		n = pf_specifier_c(args, fpara);
	else if (fpara->specifier == 's')
		n = pf_specifier_s(args, fpara);
	else if (fpara->specifier == 'p')
		n = pf_specifier_p(args, fpara);
	else if (fpara->specifier == 'd' || fpara->specifier == 'i')
		n = pf_specifier_di(args, fpara);
	else if (fpara->specifier == 'u')
		n = pf_specifier_u(args, fpara);
	else if (fpara->specifier == 'x' || fpara->specifier == 'X')
		n = pf_specifier_xx(args, fpara);
	else if (fpara->specifier == '%')
		n = pf_specifier_mod(fpara);
	else if (fpara->specifier == 'n')
		n = pf_specifier_n(args, ct);
	else if (fpara->specifier == 'f')
		n = pf_specifier_f(args, fpara);
	free(fpara);
	return (n);
}
