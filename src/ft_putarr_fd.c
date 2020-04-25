/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 21:35:14 by atemfack          #+#    #+#             */
/*   Updated: 2020/04/24 23:30:05 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylibft.h"

void	ft_putarr_fd(int fd, int **arr, int row, int col, char *sep)
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
			ft_putnbr_fd(arr[i][j], fd);
			if (j++ < col - 1)
				ft_putstr_fd(sep, fd);
		}
		ft_putchar_fd('\n', fd);
		i++;
	}
}
