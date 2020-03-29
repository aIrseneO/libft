/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_selection.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 23:19:16 by atemfack          #+#    #+#             */
/*   Updated: 2020/03/29 01:17:51 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_sort_selection(int *tab, int size)
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
			if (tab[imin] > tab[i]) 
				imin = i;
		ft_swap(&tab[imin], &tab[j++]);
	}
}
