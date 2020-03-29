/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 17:11:59 by atemfack          #+#    #+#             */
/*   Updated: 2020/03/29 01:52:07 by atemfack         ###   ########.fr       */
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
	int tab[] = {atoi(av[1]), atoi(av[2]), atoi(av[3]),
				atoi(av[4]), atoi(av[5])};
	ft_sort_rbubble(tab, 5);
	int i = 0;
	while (i < 5)
		printf("%d ", tab[i++]);
	printf("\n");
	int t[] = {  2,23,1,9,10, 31, 5, 13,90,21,0};
	ft_sort_rbubble(t, 11);
	i = 0;
	while (i < 11)
		printf("%d ", t[i++]);
	printf("\n");
	return 0;
}

/*int main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	printf("%s\n", ft_strrev(av[1]));
	return (0);
}*/
