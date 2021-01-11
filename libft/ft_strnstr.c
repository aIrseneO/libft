/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:02:02 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 23:12:20 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	char	*c;
	size_t	nm[2];

	if (!haystack || !needle)
		return (NULL);
	nm[0] = ft_strlen(needle);
	if (!nm[0])
		return ((char *)haystack);
	nm[1] = 0;
	while (*haystack)
	{
		c = ft_memchr(haystack, *needle, ft_strlen(haystack));
		if (c == NULL)
			return (NULL);
		if ((ft_memcmp(needle, c, nm[0]) == 0))
		{
			nm[1] += c - haystack + nm[0];
			if (nm[1] <= len)
				return (c);
			return (NULL);
		}
		nm[1] += c - haystack + 1;
		haystack = c + 1;
	}
	return (NULL);
}
