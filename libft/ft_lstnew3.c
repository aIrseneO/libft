/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

t_list	*ft_lstnew3(char *begin, char *end)
{
	int				n;
	t_list			*new;
	char			*tmp;

	n = end - begin;
	tmp = (char *)malloc(sizeof(*tmp) * (n + 2));
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, begin, n + 2);
	tmp[n + 1] = '\0';
	new = ft_lstnew(tmp);
	if (new == NULL)
	{
		free(tmp);
		return (NULL);
	}
	return (new);
}
