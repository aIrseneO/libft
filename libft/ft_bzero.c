/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	if (!s || !n)
		return ;
	tmp = (char *)s;
	while (n--)
		*tmp++ = '\0';
}
