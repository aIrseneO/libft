/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

static int	ft_recursive(long nbr, char *str, int i)
{
	int		j;

	if (nbr < 10)
	{
		str[i] = nbr + 48;
		return (1);
	}
	j = ft_recursive(nbr / 10, str, i);
	str[j] = nbr % 10 + 48;
	return (j + 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	str[12];
	int		i;

	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		str[i++] = '-';
		nbr *= -1;
	}
	i += ft_recursive(nbr, str + i, 0);
	str[i] = '\0';
	ft_putstr_fd(str, fd);
}
