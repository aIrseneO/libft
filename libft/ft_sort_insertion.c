/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_sort_insertion(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	if (!(tab))
		return ;
	i = 1;
	while (i < size)
	{
		j = i - 1;
		k = i++;
		while (j >= 0)
		{
			if (tab[k] < tab[j])
			{
				ft_swap(&tab[k], &tab[j]);
				k = j;
			}
			j--;
		}
	}
}
