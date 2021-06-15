/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

static t_list	*ft_strtolist(char *s, char c, char *begin, char *end)
{
	t_list		*new;
	t_list		*head;

	head = NULL;
	while (*s)
	{
		begin = s;
		while (*(s + 1) && *s != c)
			s++;
		end = s;
		if (*s == c)
			end = s - 1;
		s++;
		new = ft_lstnew3(begin, end);
		if (new == NULL)
		{
			ft_lstclear(&head, free);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		while (*s == c)
			s++;
	}
	return (head);
}

char			**ft_split(char const *s, char c)
{
	t_list		*lst;
	char		**astr;

	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	if (!(*s))
		return (ft_astrinit(1));
	lst = ft_strtolist((char *)s, c, NULL, NULL);
	if (lst == NULL)
		return (NULL);
	astr = ft_lsttoastr(lst);
	if (astr == NULL)
		ft_lstclear(&lst, free);
	else
		ft_lstclear(&lst, NULL);
	return (astr);
}
