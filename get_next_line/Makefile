#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2021/01/09 00:38:21 by atemfack          #+#    #+#             *#
#*   Updated: 2021/01/13 02:10:29 by atemfack         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME	= get_next_line.a

SRCS	= get_next_line_bonus_utils.c get_next_line_bonus.c

HEADER	= get_next_line_bonus.h

OBJS	= $(subst .c,.o,$(SRCS))

CFLAGS	= -Wall -Wextra -Werror

BUF_SIZE	= 42
FD_SIZE		= 8

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rc $@ $^
			ranlib $(NAME)

%.o:		%.c $(HEADER)
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BUF_SIZE) -D FD_SIZE=$(FD_SIZE) -c -o $@ $<

clean:
			/bin/rm -f $(OBJS)

fclean: 	clean
			/bin/rm -f $(NAME)

re:			fclean all

f:			all clean

.PHONY:		clean fclean all re f
