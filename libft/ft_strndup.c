/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strndup(char const *s1, size_t n)
{
	char	*sdup;
	size_t	i;

	if (!s1)
		return (NULL);
	sdup = (char *)malloc(sizeof(*sdup) * (n + 1));
	if (sdup == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		sdup[i] = s1[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
