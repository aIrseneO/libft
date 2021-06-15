/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#include "libft.h"

static int		sp_is_y(char *s, int i, int (*fy)(char))
{
	int			n;

	n = 0;
	while (i >= 0 && fy(s[i]))
	{
		n++;
		i--;
	}
	return (n % 2);
}

static char		*ft_skip(char *s, char c, int (*fx)(char), int (*fy)(char))
{
	int			i;
	char		x;

	i = 0;
	while (s[i + 1])
	{
		if (fx(s[i]) && !sp_is_y(s, i - 1, fy))
		{
			x = s[i++];
			while (s[i] && !(s[i] == x && !sp_is_y(s, i - 1, fy)))
				i++;
			if (s[i + 1])
				i++;
		}
		else if (s[i] == c && !sp_is_y(s, i - 1, fy))
			break ;
		else
			i++;
	}
	return (s + i);
}

static t_list	*ft_strtolist(char *s, char c, int (*fx)(char), int (*fy)(char))
{
	t_list		*new;
	t_list		*head;
	char		*begin;
	char		*end;

	head = NULL;
	while (*s)
	{
		begin = s;
		s = ft_skip(s, c, fx, fy);
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
** Exactly as ft_split2 plus handles exception when `c` is
** previous by (2n + 1) `y`(s), n is a positif integer.
** `y` is/are char(s) that passed to the function `fy` return(s) true
** In most cases fy will be ft_isbackslash and y is `\`.
*/

char			**ft_split3(char const *s, char c, int (*fx)(char),
					int (*fy)(char))
{
	t_list		*lst;
	char		**astr;

	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	if (!(*s))
		return (ft_astrinit(1));
	lst = ft_strtolist((char *)s, c, fx, fy);
	if (lst == NULL)
		return (NULL);
	astr = ft_lsttoastr(lst);
	if (astr == NULL)
		ft_lstclear(&lst, free);
	else
		ft_lstclear(&lst, NULL);
	return (astr);
}
