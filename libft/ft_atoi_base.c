/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

static int		ft_get_signe(char const **str)
{
	if (**str == '-')
	{
		(*str)++;
		return (-1);
	}
	else if (**str == '+')
	{
		(*str)++;
		return (1);
	}
	else
		return (1);
}

int				ft_atoi_base(char const *str, int base)
{
	char		c;
	long long	nbr;
	int			signe;
	short int	tmp[2];

	if (!str || base < 2)
		return (-42);
	while (ft_isspace(*str))
		str++;
	signe = ft_get_signe(&str);
	nbr = 0;
	tmp[0] = base + 48;
	tmp[1] = base % 10 + 'a';
	c = ft_tolower(*str++);
	while (((c > 47 && c < tmp[0] && c < 58)
			|| (c >= 'a' && c < tmp[1] && base > 10)))
	{
		if (c > 57)
			nbr = nbr * base + c - 'a' + 10;
		else
			nbr = nbr * base + c - 48;
		c = ft_tolower(*str++);
	}
	return (nbr * signe);
}
