/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (-42);
	if (n == 0)
		return (0);
	while ((*s1) && (*s2) && (n-- - 1 > 0) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
