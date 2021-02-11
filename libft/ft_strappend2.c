/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 01:53:26 by atemfack          #+#    #+#             */
/*   Updated: 2021/02/11 04:42:59 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend2(char *dest, char const *src, size_t destlenmax)
{
	size_t	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && i < destlenmax)
		dest[i++] = *src++;
	dest[i] = 0;
	return (dest);
}
