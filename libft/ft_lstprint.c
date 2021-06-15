/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

void	ft_lstprint(t_list *lst)
{
	write(1, "-->\n", 4);
	while (lst)
	{
		if (!lst->content)
			write(1, "(null)\n", 7);
		else
			ft_putendl_fd(lst->content, 1);
		lst = lst->next;
	}
	write(1, "<--\n", 4);
}
