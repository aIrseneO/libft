/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

int	ft_isredirection(char c)
{
	if (c == '<')
		return ('<');
	if (c == '>')
		return ('>');
	return (0);
}
