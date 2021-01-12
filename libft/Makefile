# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atemfack <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 16:30:05 by atemfack          #+#    #+#              #
#*   Updated: 2021/01/11 16:31:51 by atemfack         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_calloc.c ft_memalloc.c ft_memdel.c ft_strdel.c \
	ft_strnew.c ft_stralloc.c ft_strclr.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_isspace.c ft_strlen.c ft_strcpy.c ft_strlcpy.c ft_strcat.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
	ft_strcmp.c ft_strncmp.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_striter.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew2.c ft_lstnew3.c ft_astrtolst.c ft_lsttoastr.c \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstiter.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstdelhead.c ft_lstclear.c ft_lstmap.c \
	ft_rgbcolor.c ft_atoi_base.c ft_utoa_base.c ft_isfx_ptrmove.c ft_strrevs.c \
	ft_max.c ft_sort_rbubble.c ft_sort_selection.c ft_sort_bubble.c ft_swap.c \
	ft_sort_rinsertion.c ft_sort_insertion.c ft_sort_rselection.c ft_cswap.c \
	ft_isredirection.c ft_isquotation.c ft_strjoin2.c ft_getcwd.c ft_astrcpy.c \
	ft_astrprint.c ft_astrinit.c ft_astrfree.c ft_astrnfree.c ft_astrsize.c
	
	
HEADER = libft.h

OBJS = $(subst .c,.o,$(SRCS))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@ranlib $(NAME)

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

f:	all clean

.PHONY: all clean fclean re f
