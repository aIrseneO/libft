/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:49:41 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/27 21:54:13 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	if ((new = (char *)malloc(sizeof(*new) * (len + 1))) == NULL)
		return (NULL);
	s += start;
	i = 0;
	while (i < len)
		new[i++] = *s++;
	new[i] = '\0';
	return (new);
}
