/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 09:42:14 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/29 01:25:15 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char const *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && *src)
		dst[i++] = *src++;
	if (i == len)
		return (dst);
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
