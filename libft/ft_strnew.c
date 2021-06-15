/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	char	*tmp2;

	tmp = (char *)malloc(sizeof(*tmp) * (size + 1));
	if (tmp == NULL)
		return (NULL);
	tmp2 = tmp;
	while (size--)
		*tmp++ = 0;
	*tmp = '\0';
	return (tmp2);
}
