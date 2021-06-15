/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_sort_bubble(int *tab, int size)
{
	int	i;
	int	check;

	if (!(tab))
		return ;
	check = 1;
	while (check)
	{
		i = 0;
		check = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				check++;
			}
			i++;
		}
		size--;
	}
}
