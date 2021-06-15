/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *nw)
{
	if (!lst || !nw)
		return ;
	if (!(*lst))
	{
		*lst = nw;
		return ;
	}
	ft_lstlast(*lst)->next = nw;
}
