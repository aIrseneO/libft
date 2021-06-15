/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strchr(char const *s, int x)
{
	char	c;

	c = (char)x;
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while ((c != *s) && (*s))
		s++;
	if (!(*s))
		return (NULL);
	return ((char *)s);
}
