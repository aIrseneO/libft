/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:54:02 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 22:49:15 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s1)
{
	char	*s2;
	char	*tmp;

	if (!s1)
		return (NULL);
	s2 = (char *)malloc(sizeof(*s2) * (ft_strlen(s1) + 1));
	if (s2 == NULL)
		return (NULL);
	tmp = s2;
	while (*s1)
		*s2++ = *s1++;
	*s2 = '\0';
	return (tmp);
}
