/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

int	ft_atoi(char const *str)
{
	long long	nbr;
	long long	signe;

	if (!str)
		return (-42);
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\f' || *str == '\v' || *str == '\r')
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
