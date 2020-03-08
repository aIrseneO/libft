/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:04:35 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/27 21:09:19 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if ((list = malloc(sizeof(*list))) == NULL)
		return (NULL);
	list->next = NULL;
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
		return (list);
	}
	list->content = (void *)content;
	list->content_size = content_size;
	return (list);
}
