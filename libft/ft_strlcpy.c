/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	lens;

	if (!src)
		return (0);
	lens = ft_strlen(src);
	if (!(size--))
		return (lens);
	i = 0;
	while (i < size && *src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (lens);
}
