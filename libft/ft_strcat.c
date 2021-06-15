/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strcat(char *s1, char const *s2)
{
	int	lens1;

	lens1 = ft_strlen(s1);
	while (*s2)
		s1[lens1++] = *s2++;
	s1[lens1] = '\0';
	return (s1);
}
