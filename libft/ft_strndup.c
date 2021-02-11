/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 18:54:39 by atemfack          #+#    #+#             */
/*   Updated: 2021/02/01 14:52:58 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *s1, size_t n)
{
	char	*sdup;
	size_t	i;

	if (!s1)
		return (NULL);
	sdup = (char *)malloc(sizeof(*sdup) * (n + 1));
	if (sdup == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		sdup[i] = s1[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
