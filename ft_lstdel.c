/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:39:28 by atemfack          #+#    #+#             */
/*   Updated: 2020/02/26 20:50:26 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp1;
	t_list *tmp2;

	tmp1 = *alst;
	while (tmp1)
	{
		tmp2 = tmp1;
		ft_lstdelone(&tmp1, del);
		tmp1 = tmp2->next;
	}
	*alst = NULL;
}
