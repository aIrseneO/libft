/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	*ft_strrevs(char *str)
{
	char	c;
	size_t	i;
	size_t	j;

	j = ft_strlen(str);
	if (!(str) || j < 2)
		return (str);
	i = 0;
	j--;
	while (i < j)
	{
		c = str[i];
		str[i++] = str[j];
		str[j--] = c;
	}
	return (str);
}
