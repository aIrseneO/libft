/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strappend2(char *dest, char const *src, size_t destlenmax)
{
	size_t	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && i < destlenmax)
		dest[i++] = *src++;
	dest[i] = 0;
	return (dest);
}
