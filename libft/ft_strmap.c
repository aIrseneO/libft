/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	size_t	i;
	char	*map;

	if (!(s))
		return (NULL);
	len = ft_strlen(s);
	map = (char *)malloc(sizeof(*map) * (len + 1));
	if (map != NULL)
	{
		i = 0;
		while (i < len)
			map[i++] = f(*s++);
		map[i] = '\0';
	}
	return (map);
}
