/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

t_list	*ft_lstdelhead(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !(*lst))
		return (NULL);
	tmp = (*lst)->next;
	ft_lstdelone(*lst, del);
	return (tmp);
}
