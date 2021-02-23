/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 02:09:04 by atemfack          #+#    #+#             */
/*   Updated: 2021/02/23 02:39:10 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *join3(char const *s1, char const *s2, char const *s3)
{
	size_t	i;
	char	*s;

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

char	*ft_strjoin2(char const *s1, char const *s2, char const *s3)
{
	if (!s1)
	{
		if (!s2)
		{
			if (!s3)
				return (NULL);
			return (ft_strdup(s3));
		}
		if (!s3)
			return(ft_strdup(s2));
		return (ft_strjoin(s2, s3));
	}
	if (!s2)
	{
		if(!s3)
			return (ft_strdup(s1));
		return (ft_strjoin(s1, s3));
	}
	if (!s3)
		return (ft_strjoin(s1, s2));
	return (join3(s1, s2, s3));
}
