/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 22:22:34 by atemfack          #+#    #+#             */
/*   Updated: 2020/03/30 23:43:24 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putarr(int **arr, int row, int col, char *sep)
{
	int	i;
	int	j;

	if (!(arr) || !(sep) || !(row) || !(col))
		return ;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			ft_putnbr(arr[i][j]);
			if (j++ < col - 1)
				ft_putstr(sep);
		}
		ft_putchar('\n');
		i++;
	}
}
