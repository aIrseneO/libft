/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astrnfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 01:58:07 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 04:08:50 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_astrnfree(char ***astr, int n)
{
	if (!astr || !(*astr))
		return ;
	while (--n >= 0)
		free((*astr)[n]);
	free(*astr);
	*astr = NULL;
}
