/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_memdel(void **ap)
{
	char	*tmp;

	if (!(ap))
		return ;
	tmp = *ap;
	free(tmp);
	*((char **)ap) = NULL;
}
