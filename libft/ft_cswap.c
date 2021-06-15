/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_cswap(char *c1, char *c2)
{
	char	c;

	c = *c1;
	*c1 = *c2;
	*c2 = c;
}
