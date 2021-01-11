/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_specifier_n.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 23:54:32 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/11 03:26:14 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_specifier_n(va_list args, int ct)
{
	int		*count;

	count = va_arg(args, int *);
	*count = ct;
	return (0);
}
