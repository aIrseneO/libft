/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strdup(char const *s1)
{
	char	*s2;
	char	*tmp;

	if (!s1)
		return (NULL);
	s2 = (char *)malloc(sizeof(*s2) * (ft_strlen(s1) + 1));
	if (s2 == NULL)
		return (NULL);
	tmp = s2;
	while (*s1)
		*s2++ = *s1++;
	*s2 = '\0';
	return (tmp);
}
