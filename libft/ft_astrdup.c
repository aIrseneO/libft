/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:41:30 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/26 13:51:44 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_astrdup(char **astr)
{
	int		i;
	char	**astrdup;

	if (!astr)
		return (NULL);
	astrdup = ft_astrinit(ft_astrsize(astr) + 1);
	if (astrdup == NULL)
		return (NULL);
	i = 0;
	while (astr[i])
	{
		astrdup[i] = ft_strdup(astr[i]);
		if (astrdup[i] == NULL)
		{
			ft_astrfree(&astrdup, free);
			return (NULL);
		}
		i++;
	}
	return (astrdup);
}
