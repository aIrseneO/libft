/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 03:51:28 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/10 03:56:49 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew3(char *begin, char *end)
{
	int				n;
	t_list			*new;
	char			*tmp;

	n = end - begin;
	tmp = (char *)malloc(sizeof(*tmp) * (n + 2));
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, begin, n + 2);
	tmp[n + 1] = '\0';
	new = ft_lstnew(tmp);
	if (new == NULL)
	{
		free(tmp);
		return (NULL);
	}
	return (new);
}
