/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_stralloc(char **str, size_t size)
{
	*str = (char *)malloc(sizeof(**str) * (size + 1));
	if (*str == NULL)
		return (NULL);
	(*str)[size] = '\0';
	return (*str);
}
