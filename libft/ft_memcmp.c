/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	while (n && (s1) && (s2) && (*((char *)s1) == *((char *)s2)))
	{
		n--;
		s1++;
		s2++;
	}
	if (!n)
		return (0);
	if (!s1 || !s2)
		return (-42);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
