/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 18:54:39 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/27 19:08:33 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *s1, size_t n)
{
	char	*sdup;
	size_t	len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	if (n >= len)
		return (ft_strdup(s1));
	sdup = (char *)malloc(sizeof(*sdup) * (n + 1));
	if (sdup == NULL)
		return (NULL);
	len = 0;
	while (len < n)
	{
		sdup[len] = s1[len];
		len++;
	}
	sdup[len] = '\0';
	return (sdup);
}
