/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*map;

	if (!(s) || !(f))
		return (NULL);
	len = ft_strlen(s);
	map = (char *)malloc(sizeof(*map) * (len + 1));
	if (map != NULL)
	{
		i = 0;
		while (len--)
		{
			map[i] = f(i, *s++);
			i++;
		}
		map[i] = '\0';
	}
	return (map);
}
