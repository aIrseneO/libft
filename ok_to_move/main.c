/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 17:11:59 by atemfack          #+#    #+#             */
/*   Updated: 2020/03/30 23:40:46 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "tmp_header.h"

int main(int ac, char **av)
{
	if (ac != 6)
		return 0;
	int *tab = (int*)malloc(sizeof(int) * 5);
	tab[0] = atoi(av[1]); tab[1] = atoi(av[2]); tab[2] = atoi(av[3]);
	tab[3] = atoi(av[4]); tab[4] = atoi(av[5]);
	ft_sort_rinsertion(tab, 5);
	ft_putarr(&tab, 1, 5, "  ");
	free(tab);
	int t[] = {2,23,1,9,10, 31, 5, 13,90,21,0};
	ft_sort_rinsertion(t, 11);
	int i = 0;
	while (i < 11)
		printf("%d ", t[i++]);
	printf("\n");
	return 0;
}

/*int main(void)
{
	int **arr = (int **)malloc(sizeof(int*)*4);
	int i = 0;
	while (i < 4)
		arr[i++] = (int *)malloc(sizeof(int)*5);
	int j;
	i = 0;
	while (i < 4) {
		j = 0;
		while (j < 5) {
			arr[i][j] = j;
			j++;
		}
		i++;
	}
	ft_putarr(arr, 4, 5, "xx");
	return 0;
}*/

/*int main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	printf("%s\n", ft_strrev(av[1]));
	return (0);
}*/
