/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	**ft_astrdup(char **astr)
{
	int		i;
	char	**astrdup;

	if (!astr)
		return (NULL);
	astrdup = ft_astrinit(ft_astrsize(astr) + 1);
	if (astrdup == NULL)
		return (NULL);
	i = 0;
	while (astr[i])
	{
		astrdup[i] = ft_strdup(astr[i]);
		if (astrdup[i] == NULL)
		{
			ft_astrfree(&astrdup, free);
			return (NULL);
		}
		i++;
	}
	return (astrdup);
}
