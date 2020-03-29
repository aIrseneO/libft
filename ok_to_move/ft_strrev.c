/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 23:43:08 by atemfack          #+#    #+#             */
/*   Updated: 2020/03/28 23:43:18 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrev(char *str)
{
        char    c;
        size_t  i;
        size_t  j;

        if (!(str))
                return (NULL);
        if (!(*str))
                return (str);
        i = 0;
        j = strlen(str) - 1;
        while (i < j)
        {
                c = str[i];
                str[i++] = str[j];
                str[j--] = c;
        }
        return (str);
}
