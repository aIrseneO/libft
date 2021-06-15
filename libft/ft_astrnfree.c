/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_astrnfree(char ***astr, int n)
{
	if (!astr || !(*astr))
		return ;
	while (--n >= 0)
		free((*astr)[n]);
	free(*astr);
	*astr = NULL;
}
