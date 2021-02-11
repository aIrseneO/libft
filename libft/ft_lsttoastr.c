/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoastr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 05:15:14 by atemfack          #+#    #+#             */
/*   Updated: 2021/02/11 04:38:13 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_lsttoastr(t_list *lst)
{
	int		n;
	char	**astr;

	if (!lst)
		return (NULL);
	n = ft_lstsize(lst);
	astr = ft_astrinit(n + 1);
	if (astr == NULL)
		return (NULL);
	n = 0;
	while (lst)
	{
		astr[n++] = lst->content;
		lst = lst->next;
	}
	return (astr);
}
