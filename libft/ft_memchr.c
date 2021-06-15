/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	while (n && ((char)c != *((char *)s)))
	{
		s++;
		n--;
	}
	if (!n)
		return (NULL);
	return ((void *)s);
}
