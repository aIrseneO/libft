/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_strdel(char **as)
{
	char	*s;

	if (!(as))
		return ;
	s = *as;
	free(s);
	*as = NULL;
}
