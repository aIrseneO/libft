/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

char	**ft_lsttoastr(t_list *lst)
{
	int		n;
	char	**astr;

	if (!lst)
		return (NULL);
	n = ft_lstsize(lst);
	astr = ft_astrinit(n + 1);
	if (astr == NULL)
		return (NULL);
	n = 0;
	while (lst)
	{
		astr[n++] = lst->content;
		lst = lst->next;
	}
	return (astr);
}
