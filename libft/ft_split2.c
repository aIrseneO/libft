/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

static char		*ft_skip(char *s, char c, int (*fx)(char))
{
	char		x;

	while (*(s + 1))
	{
		if (fx(*s))
		{
			x = *s++;
			while (*s && *s != x)
				s++;
			s++;
		}
		else if (*s == c)
			break ;
		else
			s++;
	}
	return (s);
}

static t_list	*ft_strtolist(char *s, char c, int (*fx)(char))
{
	t_list		*new;
	t_list		*head;
	char		*begin;
	char		*end;

	head = NULL;
	while (*s)
	{
		begin = s;
		s = ft_skip(s, c, fx);
		end = s;
		if (*s == c)
			end--;
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

/*
** Exactly as ft_split1 plus handles exception if `c` is in between `x`
** where `x` is/are char(s) that passed to the function `fx` return(s) true.
** In most cases `fx` will be ft_isquotations and `x` is `'` and `"`.
*/

char			**ft_split2(char const *s, char c, int (*fx)(char))
{
	t_list		*lst;
	char		**astr;

	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	if (!(*s))
		return (ft_astrinit(1));
	lst = ft_strtolist((char *)s, c, fx);
	if (lst == NULL)
		return (NULL);
	astr = ft_lsttoastr(lst);
	if (astr == NULL)
		ft_lstclear(&lst, free);
	else
		ft_lstclear(&lst, NULL);
	return (astr);
}
