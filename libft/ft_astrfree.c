/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_astrfree(char ***astr, void (*del)(void *))
{
	int		i;

	if (!astr || !(*astr))
		return ;
	if (del)
	{
		i = 0;
		while ((*astr)[i])
		{
			del((*astr)[i]);
			(*astr)[i++] = NULL;
		}
	}
	free(*astr);
	*astr = NULL;
}
