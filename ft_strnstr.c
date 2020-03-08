/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 22:02:02 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/22 23:43:02 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	char *s;

	if ((s = ft_strstr(haystack, needle)) == NULL)
		return (NULL);
	if (len >= ft_strlen(haystack) - ft_strlen(s) + ft_strlen(needle))
		return (s);
	return (NULL);
}
