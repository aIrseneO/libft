/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	char	*tmp;

	if (!(dst) && !(src))
		return (NULL);
	tmp = dst;
	while (n--)
		*tmp++ = *(char *)src++;
	return (dst);
}
