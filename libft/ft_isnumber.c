/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

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
