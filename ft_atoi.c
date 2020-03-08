/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:56:02 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/28 21:17:00 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(char const *str)
{
	int	nbr;
	int	signe;

	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\f' || *str == '\v' || *str == '\r')
		str++;
	signe = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -1;
		str++;
	}
	if (*str < 48 || *str > 57)
		return (0);
	nbr = 0;
	while (*str && ((*str > 47) && (*str < 58)))
		nbr = nbr * 10 + (*str++ - 48);
	return (nbr * signe);
}
