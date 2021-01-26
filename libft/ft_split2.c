/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 02:42:15 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/26 04:59:52 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_skip(char *s, char c, int (*ft_isx)(char))
{
	char	x;

	while (*(s + 1))
	{
		if (ft_isx(*s))
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

static t_list	*ft_strtolist(char *s, char c, int (*ft_isx)(char))
{
	t_list	*new;
	t_list	*head;
	char	*begin;
	char	*end;

	head = NULL;
	while (*s)
	{
		begin = s;
		s = ft_skip(s, c, ft_isx);
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

char	**ft_split2(char const *s, char c, int (*ft_isx)(char))
{
	t_list	*lst;
	char	**astr;

	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	if (!(*s))
		return (ft_astrinit(1));
	lst = ft_strtolist((char *)s, c, ft_isx);
	if (lst == NULL)
		return (NULL);
	astr = ft_lsttoastr(lst);
	if (astr == NULL)
		ft_lstclear(&lst, free);
	else
		ft_lstclear(&lst, NULL);
	return (astr);
}

/* To Test Usage: ./bin "string to split" "delimiter"
int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	char **astr;
	astr = ft_split(av[1], *av[2]);
	ft_astrprint(astr);
	ft_astrfree(&astr, free);
	return (0);
}
*/
