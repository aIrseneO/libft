/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 03:41:50 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 19:24:19 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
