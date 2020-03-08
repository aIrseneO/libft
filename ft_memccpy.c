/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:12:46 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/28 01:53:06 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while ((*(unsigned char *)src != (unsigned char)c) && (i < n))
	{
		*(char *)dst++ = *(char *)src++;
		i++;
	}
	if (i == n)
	{
		return (NULL);
	}
	*(char *)dst++ = *(char *)src;
	return (dst);
}
