/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astrtolst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 03:58:25 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 05:14:27 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_astrtolst(char **astr)
{
	t_list		*head;
	t_list		*tmp;
	t_list		*new;

	if (!(astr))
		return (NULL);
	new = ft_lstnew(*astr);
	if (new == NULL)
		return (NULL);
	if (!(*astr++))
		return (new);
	head = new;
	tmp = new;
	while (*astr)
	{
		new = ft_lstnew(*astr++);
		if (new == NULL)
		{
			ft_lstclear(&head, NULL);
			return (NULL);
		}
		ft_lstadd_back(&tmp, new);
		tmp = tmp->next;
	}
	return (head);
}
