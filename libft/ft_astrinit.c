/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astrinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 01:52:11 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 01:55:03 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_astrinit(int size)
{
	char	**str;

	str = (char **)malloc(sizeof(*str) * size);
	if (str == NULL)
		return (NULL);
	while (--size >= 0)
		str[size] = NULL;
	return (str);
}
