/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:55:41 by atemfack          #+#    #+#             */
/*   Updated: 2020/03/09 20:41:49 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	size_t	len;
	char	*new;

	if (!(s))
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (!(len = ft_strlen(s)))
	{
		if ((new = (char *)malloc(sizeof(*new))) == NULL)
			return (NULL);
		*new = '\0';
		return (new);
	}
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	if ((new = (char *)malloc(sizeof(*new) * (++len))) == NULL)
		return (NULL);
	i = 0;
	while (len-- > 1)
		new[i++] = *s++;
	new[i] = '\0';
	return (new);
}
