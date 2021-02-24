/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 18:11:00 by atemfack          #+#    #+#             */
/*   Updated: 2021/01/11 03:34:03 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

/*
** Default values for BUFFER_SIZE and FD_SIZE
*/

# ifndef FD_SIZE
#  define FD_SIZE 32
# endif
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

size_t		gnl_strlen(char const *s);
char		*gnl_strchr_endl(char const *s);
char		*gnl_strncpy(char *dst, char const *src, int n);
char		*gnl_strjoin(char const *s1, char const *s2);
int			get_next_line(int fd, char **line);

#endif
