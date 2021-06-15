/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	**ft_astrinit(int size)
{
	char	**str;

	str = (char **)malloc(sizeof(*str) * size);
	if (str == NULL)
		return (NULL);
	while (--size >= 0)
		str[size] = NULL;
	return (str);
}
