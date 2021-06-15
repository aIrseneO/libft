/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_astrprint(char **s)
{
	ft_putstr_fd("\n-->\n", 1);
	if (!s)
	{
		ft_putstr_fd("<--\n", 1);
		return ;
	}
	while (*s)
		ft_putendl_fd(*s++, 1);
	ft_putstr_fd("<--\n", 1);
}
