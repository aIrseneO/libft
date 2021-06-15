/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

/*
** if `str` is a valid name it returns its strlen, return 0 otherwise.
*/

size_t		ft_isname(char *str)
{
	size_t	i;

	if (!ft_isalpha(str[0]) && str[0] != '_')
		return (0);
	i = 1;
	while (str[i] &&
			(ft_isalpha(str[i]) || ft_isdigit(str[i]) || str[i] == '_'))
		i++;
	if (str[i])
		return (0);
	return (i);
}
