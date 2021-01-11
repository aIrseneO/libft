/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 21:57:45 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 23:03:25 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	char	*tmp2;

	tmp = (char *)malloc(sizeof(*tmp) * (size + 1));
	if (tmp == NULL)
		return (NULL);
	tmp2 = tmp;
	while (size--)
		*tmp++ = 0;
	*tmp = '\0';
	return (tmp2);
}
