/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:04:35 by atemfack          #+#    #+#             */
/*   Updated: 2020/03/09 00:47:05 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	char	*tmp;
	size_t	i;

	if ((list = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	list->next = NULL;
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
		return (list);
	}
	if ((tmp = (char *)malloc(sizeof(char)
					* (content_size + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < content_size)
		tmp[i++] = *(char *)content++;
	tmp[i] = '\0';
	list->content = tmp;
	list->content_size = content_size;
	return (list);
}
