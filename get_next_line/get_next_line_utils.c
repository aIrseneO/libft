/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "get_next_line.h"

size_t	gnl_strlen(char const *s)
{
	size_t	count;

	count = 0;
	if (s)
		while (*s++)
			count++;
	return (count);
}

char	*gnl_strchr_endl(char const *s)
{
	if (!s)
		return (NULL);
	while ((*s != '\n') && *s)
		s++;
	if (!(*s))
		return (NULL);
	return ((char *)s);
}

char	*gnl_strncpy(char *dst, char const *src, int n)
{
	int		i;

	i = 0;
	while (i < n)
		dst[i++] = *src++;
	return (dst);
}

char	*gnl_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*s;

	len = gnl_strlen(s1) + gnl_strlen(s2);
	s = (char *)malloc(sizeof(*s) * (len + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		s[i++] = *s1++;
	if (s2)
		while (*s2)
			s[i++] = *s2++;
	s[i] = '\0';
	return (s);
}
