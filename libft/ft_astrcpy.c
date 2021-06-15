/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

int	ft_astrcpy(char **dest, char **src)
{
	while (*src)
	{
		*dest = ft_strdup(*src++);
		if (*dest++ == NULL)
			return (-1);
	}
	return (0);
}
