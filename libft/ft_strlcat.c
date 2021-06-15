/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	size_t	lend;
	size_t	len;

	lend = ft_strlen(dst);
	if (dstsize < lend)
		len = dstsize + ft_strlen(src);
	else
		len = lend + ft_strlen(src);
	if (dstsize > lend + 1)
		dstsize = dstsize - lend - 1;
	else
		dstsize = 0;
	while ((*src) && (dstsize--))
		dst[lend++] = *src++;
	dst[lend] = '\0';
	return (len);
}
