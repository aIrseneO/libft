/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 00:45:53 by atemfack          #+#    #+#             */
/*   Updated: 2021/02/11 04:42:13 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *lst)
{
	write(1, "-->\n", 4);
	while (lst)
	{
		if (!lst->content)
			write(1, "(null)\n", 7);
		else
			ft_putendl_fd(lst->content, 1);
		lst = lst->next;
	}
	write(1, "<--\n", 4);
}
