/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 17:21:16 by atemfack          #+#    #+#             */
/*   Updated: 2020/03/29 01:51:35 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TMP_HEADER_H
# define TMP_HEADER_H
# include "libft.h"

void	ft_swap(int *a, int *b);
int	ft_max  (int a, int b);
char	*ft_strrev(char *str);
void	ft_sort_selection(int *tab, int size);
void	ft_sort_rselection(int *tab, int size);
void	ft_sort_bubble(int *tab, int size);
void	ft_sort_rbubble(int *tab, int size);


#endif
