/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

t_list	*ft_lstnew2(void *content)
{
	t_list	*list;
	char	*str;

	list = (t_list *)malloc(sizeof(*list));
	if (list == NULL)
		return (NULL);
	str = ft_strdup(content);
	if (str == NULL)
	{
		free(list);
		return (NULL);
	}
	list->content = str;
	list->next = NULL;
	return (list);
}
