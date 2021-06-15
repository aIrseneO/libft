/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

static t_list	*lstmap(t_list *lst, void *(*f)(void *))
{
	t_list		*tmp1;
	t_list		*tmp2;

	if (!lst->next)
		return (ft_lstnew(f(lst->content)));
	tmp1 = lstmap(lst->next, f);
	if (tmp1 == NULL)
		return (NULL);
	tmp2 = ft_lstnew(f(lst->content));
	if (tmp2 == NULL)
		return (NULL);
	ft_lstadd_front(&tmp1, tmp2);
	return (tmp1);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !f)
		return (NULL);
	(void)del;
	return (lstmap(lst, f));
}
