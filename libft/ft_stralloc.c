/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stralloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:21:13 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/11 16:31:56 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stralloc(char **str, size_t size)
{
	*str = (char *)malloc(sizeof(**str) * (size + 1));
	if (*str == NULL)
		return (NULL);
	(*str)[size] = '\0';
	return (*str);
}
