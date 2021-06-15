/******************************************************************************/
/*     Copyright (c) 2020 Arsene Temfack                                      */
/*                                                                            */
/*     SPDX-License-Identifier: MIT                                           */
/******************************************************************************/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

/*
** Default value for BUFFER_SIZE
*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

size_t		gnl_strlen(char const *s);
char		*gnl_strchr_endl(char const *s);
char		*gnl_strncpy(char *dst, char const *src, int n);
char		*gnl_strjoin(char const *s1, char const *s2);
int			get_next_line(int fd, char **line);

#endif
