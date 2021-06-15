/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	if (!(dst) && !(src))
		return (NULL);
	i = 0;
	while ((*(unsigned char *)src != (unsigned char)c) && (i < n))
	{
		*(char *)dst++ = *(char *)src++;
		i++;
	}
	if (i == n)
	{
		return (NULL);
	}
	*(char *)dst++ = *(char *)src;
	return (dst);
}
