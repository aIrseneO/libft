/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_sort_rselection(int *tab, int size)
{
	int	i;
	int	j;
	int	imax;

	if (!(tab))
		return ;
	j = 0;
	while (j < size - 1)
	{
		i = j;
		imax = i;
		while (i++ < size - 1)
			if (tab[imax] < tab[i])
				imax = i;
		ft_swap(&tab[imax], &tab[j++]);
	}
}
