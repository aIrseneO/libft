/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	void	*tmp;

	if (!(dst) && !(src))
		return (NULL);
	len++;
	tmp = dst;
	if (src < dst)
	{
		dst += len - 2;
		src += len - 2;
		while (len-- > 1)
			*(char *)dst-- = *(char const *)src--;
	}
	else
		while (len-- > 1)
			*(char *)dst++ = *(char const *)src++;
	return (tmp);
}
