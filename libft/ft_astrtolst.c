/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

int	ft_astrtolst(t_list **lst, char **astr)
{
	t_list		*tmp;
	t_list		*new;

	if (!(astr) || !(*astr))
		return (0);
	new = ft_lstnew(*astr++);
	if (new == NULL)
		return (-1);
	*lst = new;
	tmp = new;
	while (*astr)
	{
		new = ft_lstnew(*astr++);
		if (new == NULL)
		{
			ft_lstclear(lst, NULL);
			return (-1);
		}
		ft_lstadd_back(&tmp, new);
		tmp = tmp->next;
	}
	return (1);
}
