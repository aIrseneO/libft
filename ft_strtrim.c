/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:55:41 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/27 21:53:47 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	size_t	len;
	char	*new;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if ((int)(len = ft_strlen(s)) == i)
		return ("");
	j = i;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
	{
		len--;
		i++;
	}
	i = len - j;
	if ((new = (char *)malloc(sizeof(*new) * (i + 1))) == NULL)
		return (NULL);
	k = 0;
	while (i--)
		new[k++] = s[j++];
	new[k] = '\0';
	return (new);
}
