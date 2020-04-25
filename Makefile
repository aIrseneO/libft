# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atemfack <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 16:30:05 by atemfack          #+#    #+#              #
#*   Updated: 2020/04/24 22:12:50 by atemfack         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

DYNAMIC = libft.so

SRC_42 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_calloc.c ft_memalloc.c ft_memdel.c \
	ft_strnew.c ft_strdel.c ft_strclr.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_strlen.c ft_strcpy.c ft_strlcpy.c ft_strcat.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c \
	ft_strncmp.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_striter.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRC_42 = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c

SRC = src/ft_swap.c src/ft_max.c \
	src/ft_strrevs.c src/ft_sort_selection.c \
	src/ft_sort_rselection.c src/ft_sort_bubble.c src/ft_sort_rbubble.c \
	src/ft_sort_insertion.c src/ft_sort_rinsertion.c src/ft_putarr_fd.c  

OBJ_42 = $(subst .c,.o,$(SRC_42))

OBJ_BONUS_42 = $(subst .c,.o,$(BONUS_SRC_42))

OBJ1 = $(subst .c,.o,$(SRC))

OBJ = $(subst src/f,f,$(OBJ1))

GW = gcc -Wall -Wextra -Werror

all: $(NAME)

so: $(SRC_42) $(BONUS_SRC)
	$(GW) -fPIC -c $(SRC_42) $(BONUS_SRC_42)
	gcc -shared -Wl,-soname,$(DYNAMIC) -o $(DYNAMIC) $(OBJ_42) \
		$(OBJ_BONUS_42)

$(NAME): $(SRC_42)
	$(GW) -c $(SRC_42)
	ar rc $(NAME) $(OBJ_42)
	ranlib $(NAME)

bonus: $(SRC_42) $(BONUS_SRC_42)
	$(GW) -c $(SRC_42) $(BONUS_SRC_42)
	ar rc $(NAME) $(OBJ_42) $(OBJ_BONUS_42)
	ranlib $(NAME)

full: $(SRC) $(SRC_42) $(BONUS_SRC_42)
	$(GW) -c $(SRC_42) $(BONUS_SRC_42)
	$(GW) -I ./include -c $(SRC)
	ar rc $(NAME) $(OBJ) $(OBJ_42) $(OBJ_BONUS_42)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) $(OBJ_42) $(OBJ_BONUS_42)

fclean: clean
	/bin/rm -f $(NAME) $(DYNAMIC)

re: fclean all

.PHONY: clean fclean all re bunus full
