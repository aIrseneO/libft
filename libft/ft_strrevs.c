/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrevs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 13:55:49 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 23:15:46 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrevs(char *str)
{
	char	c;
	size_t	i;
	size_t	j;

	j = ft_strlen(str);
	if (!(str) || j < 2)
		return (str);
	i = 0;
	j--;
	while (i < j)
	{
		c = str[i];
		str[i++] = str[j];
		str[j--] = c;
	}
	return (str);
}
