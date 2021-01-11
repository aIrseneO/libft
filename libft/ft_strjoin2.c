/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 02:09:04 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 22:57:39 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin2(char const *s1, char const *s2, char const *s3)
{
	size_t	i;
	char	*s;

	if (!(s1) || !(s2) || !(s3))
		return (NULL);
	s = (char *)malloc(sizeof(*s) * (ft_strlen(s1) + ft_strlen(s2)
				+ ft_strlen(s3) + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		s[i++] = *s1++;
	while (*s2)
		s[i++] = *s2++;
	while (*s3)
		s[i++] = *s3++;
	s[i] = '\0';
	return (s);
}
