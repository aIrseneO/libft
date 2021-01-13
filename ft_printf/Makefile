# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atemfack <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 16:30:05 by atemfack          #+#    #+#              #
#*   Updated: 2021/01/13 02:08:41 by atemfack         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS_LIBFT	= ft_memset.c ft_memmove.c ft_isdigit.c ft_strlen.c ft_strcpy.c \
	ft_strchr.c ft_atoi.c ft_strdup.c ft_substr.c ft_itoa.c ft_putstr_fd.c \
	ft_stralloc.c

SRCS		= ft_printf.c pf_args1.c pf_extract_fparameters2.c \
	pf_check_fparameters3.c pf_putargs4.c pf_specifier_c.c \
	pf_specifier_s.c pf_specifier_p.c pf_specifier_di.c pf_specifier_u.c \
	pf_specifier_xx.c pf_specifier_mod.c pf_specifier_n.c pf_specifier_f.c

HEADER		= ft_printf.h 

LIBFT_DIR	= ../libft

OBJS_LIBFT	= $(subst .c,.o,$(SRCS_LIBFT))

OBJS		= $(subst .c,.o,$(SRCS))

CFLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS) $(OBJS_LIBFT) 
			@ar rc $@ $^
			ranlib $(NAME)

%.o:		%.c $(HEADER)
			$(CC) -I $(LIBFT_DIR) -c $(CFLAGS) -o $@ $<

%.o:
			@$(MAKE) --no-print-directory $@ -C $(LIBFT_DIR)
			@mv $(LIBFT_DIR)/$@ .

clean:
			@/bin/rm -f $(OBJS) $(OBJS_LIBFT)

fclean:		clean
			@/bin/rm -f $(NAME)

re:			fclean all

f:			all clean

.PHONY:		clean fclean all re f
