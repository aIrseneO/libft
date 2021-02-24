/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:55:07 by atemfack          #+#    #+#             */
/*   Updated: 2021/02/11 04:41:44 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**		Check if a str is a number in between
**	[-9223372036854775808, 9223372036854775807]
**	Return the number of digits in the string "str"
*/

int			ft_isnumber(char *str)
{
	int		i;
	char	sign;

	sign = '+';
	if (*str == '-' || *str == '+')
		sign = *str++;
	if (!(*str))
		return (0);
	i = 0;
	while (str[i] && i < 19)
		if (!ft_isdigit(str[i++]))
			return (0);
	if (str[i])
		return (0);
	if (i == 19 && sign == '-' && ft_strcmp("9223372036854775808", str) < 0)
		return (0);
	if (i == 19 && sign == '+' && ft_strcmp("9223372036854775807", str) < 0)
		return (0);
	return (i);
}
