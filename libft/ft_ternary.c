/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 19:30:04 by atemfack          #+#    #+#             */
/*   Updated: 2021/02/11 04:43:31 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* What if you weren't allowed to use the ternary (?:) operator */

void	*ft_ternary(int logic, void *value1, void *value2)
{
	if (logic)
		return (value1);
	return (value2);
}
