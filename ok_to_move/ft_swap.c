/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 23:40:55 by atemfack          #+#    #+#             */
/*   Updated: 2020/03/30 21:28:59 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b) 
{
	int c;

	if (a && b)
	{
		c = *a; 
		*a = *b;
		*b = c;
	}
}