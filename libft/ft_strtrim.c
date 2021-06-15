/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

static char		*ft_null_str(void)
{
	char		*new;

	new = (char *)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	*new = '\0';
	return (new);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	char		*new;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	if (!len)
		return (ft_null_str());
	while (ft_strchr(set, s1[len - 1]))
		len--;
	new = (char *)malloc(sizeof(*new) * (++len));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (len-- > 1)
		new[i++] = *s1++;
	new[i] = '\0';
	return (new);
}
