/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astrfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 01:56:14 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 04:22:37 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_astrfree(char ***astr, void (*del)(void *))
{
	int		i;

	if (!astr || !(*astr))
		return ;
	if (del)
	{
		i = 0;
		while ((*astr)[i])
			del((*astr)[i++]);
	}
	free(*astr);
	*astr = NULL;
}