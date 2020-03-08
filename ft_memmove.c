/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 21:00:33 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/28 19:19:29 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	size_t	i;
	char	*tmpsrc;
	char	*tmpdst;
	char	cpysrc[len];

	if (!(dst) && !(src))
		return (NULL);
	tmpsrc = (char *)src;
	tmpdst = (char *)dst;
	i = 0;
	while (i < len)
		cpysrc[i++] = *tmpsrc++;
	i = 0;
	while (i < len)
		*tmpdst++ = cpysrc[i++];
	return (dst);
}
