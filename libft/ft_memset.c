/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*tmp;

	if (!b)
		return (NULL);
	tmp = b;
	while (len--)
		*tmp++ = (unsigned char)c;
	return (b);
}
