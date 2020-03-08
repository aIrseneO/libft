/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:15:28 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/27 21:07:03 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_create_list(void)
{
	t_list *list;

	if ((list = malloc(sizeof(*list))) == NULL)
		return (NULL);
	list->next = NULL;
	return (list);
}

static t_list	*ft_lstcpy_el(t_list *dest, t_list *src)
{
	if (dest == NULL)
		return (NULL);
	dest->content = src->content;
	dest->content_size = src->content_size;
	return (dest);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;
	t_list *tmp2;

	if ((new = ft_lstcpy_el(ft_create_list(), f(lst))) == NULL)
		return (NULL);
	tmp2 = new;
	if (!(lst))
		return (new);
	lst = lst->next;
	while (lst)
	{
		if ((tmp = ft_lstcpy_el(ft_create_list(), f(lst))) == NULL)
			return (NULL);
		new->next = tmp;
		new = new->next;
		lst = lst->next;
	}
	return (tmp2);
}
