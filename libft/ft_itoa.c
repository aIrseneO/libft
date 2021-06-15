/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

static int			nbrint(unsigned int x)
{
	if (x >= 10)
		return (nbrint(x / 10) + 1);
	return (1);
}

static void			fill(unsigned int nb, int n, char *s)
{
	s[n + 1] = '\0';
	while (nb >= 10)
	{
		s[n--] = nb % 10 + 48;
		nb /= 10;
	}
	s[n] = nb % 10 + 48;
}

char				*ft_itoa(int nb)
{
	int				len;
	int				signe;
	char			*new;
	unsigned int	n;

	signe = 1;
	if (nb < 0)
	{
		n = (unsigned int)(-nb);
		signe = -1;
		len = nbrint(n) + 1;
	}
	else
	{
		n = (unsigned int)nb;
		len = nbrint(n);
	}
	new = (char *)malloc(sizeof(*new) * (len + 1));
	if (new == NULL)
		return (NULL);
	fill(n, len - 1, new);
	if (signe == -1)
		new[0] = '-';
	return (new);
}
