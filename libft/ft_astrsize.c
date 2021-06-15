/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

size_t	ft_astrsize(char **astr)
{
	size_t		size;

	size = 0;
	while (astr[size])
		size++;
	return (size);
}
