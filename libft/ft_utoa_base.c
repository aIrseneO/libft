/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

static char			*ft_create_str(char **str, int len, unsigned int nb)
{
	*str = (char *)malloc(sizeof(**str) * (len + 1));
	if (str == NULL)
		return (NULL);
	(*str)[len] = '\0';
	if (!nb)
		(*str)[0] = '0';
	return (*str);
}

char				*ft_utoa_base(unsigned int nb, int base)
{
	int				len;
	char			*str;
	unsigned int	n;

	len = 1;
	n = nb;
	while (n >= (unsigned int)base)
	{
		len++;
		n /= base;
	}
	if (ft_create_str(&str, len, nb) == NULL)
		return (NULL);
	while (nb)
	{
		n = nb % base;
		if (n < 10)
			str[--len] = n + 48;
		else
			str[--len] = n % 10 + 'a';
		nb /= base;
	}
	return (str);
}
