/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:31:43 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 23:17:08 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *haystack, char const *needle)
{
	char	*c;
	size_t	len;

	if (!haystack || !needle)
		return (NULL);
	len = ft_strlen(needle);
	if (!len)
		return ((char *)haystack);
	while (*haystack)
	{
		c = ft_memchr(haystack, *needle, ft_strlen(haystack));
		if (c == NULL)
			return (NULL);
		if (ft_memcmp(needle, c, len) == 0)
			return (c);
		haystack = c + 1;
	}
	return (NULL);
}
