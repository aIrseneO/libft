/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_sort_selection(int *tab, int size)
{
	int	i;
	int	j;
	int	imin;

	if (!(tab))
		return ;
	j = 0;
	while (j < size - 1)
	{
		i = j;
		imin = i;
		while (i++ < size - 1)
		{
			if (tab[imin] > tab[i])
				imin = i;
		}
		ft_swap(&tab[imin], &tab[j++]);
	}
}
