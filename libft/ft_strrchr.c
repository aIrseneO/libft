/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strrchr(char const *s, int x)
{
	size_t	len;
	char	c;

	c = (char)x;
	if (!s)
		return (NULL);
	if (!(*s))
	{
		if (c == 0)
			return ((char *)s);
		else
			return (NULL);
	}
	len = ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *)(s + len + 1));
	while (len && (s[len] != c))
		len--;
	if (!len && (s[len] != c))
		return (NULL);
	return ((char *)(s + len));
}
