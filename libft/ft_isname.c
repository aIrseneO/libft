/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isname.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:43:14 by atemfack          #+#    #+#             */
/*   Updated: 2021/02/28 22:41:34 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** if `str` is a valid name it returns its strlen, return 0 otherwise.
*/

size_t		ft_isname(char *str)
{
	size_t	i;

	if (!ft_isalpha(str[0]) && str[0] != '_')
		return (0);
	i = 1;
	while (str[i] &&
			(ft_isalpha(str[i]) || ft_isdigit(str[i]) || str[i] == '_'))
		i++;
	if (str[i])
		return (0);
	return (i);
}
