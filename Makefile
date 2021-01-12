# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atemfack <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/18 16:30:05 by atemfack          #+#    #+#              #
#*   Updated: 2021/01/11 16:33:04 by atemfack         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRCS_FT_PRINTF = ft_printf.c pf_args1.c pf_extract_fparameters2.c \
	pf_check_fparameters3.c pf_putargs4.c pf_specifier_c.c \
	pf_specifier_s.c pf_specifier_p.c pf_specifier_di.c pf_specifier_u.c \
	pf_specifier_xx.c pf_specifier_mod.c pf_specifier_n.c pf_specifier_f.c

SRCS_GET_NEXT_LINE = get_next_line_bonus.c get_next_line_bonus_utils.c

SRC = $(SRC_MY_LIBFT) $(SRC_LIBFT_42) $(SRC_FT_PRINTF) $(SRC_GET_NEXT_LINE)

SRCS_LIBFT = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_calloc.c ft_memalloc.c ft_memdel.c ft_strdel.c \
	ft_strnew.c ft_stralloc.c ft_strclr.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_isspace.c ft_strlen.c ft_strcpy.c ft_strlcpy.c ft_strcat.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
	ft_strcmp.c ft_strncmp.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_striter.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_lsttoastr.c \
	ft_lstnew2.c ft_lstnew3.c ft_astrtolst.c \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstiter.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstdelhead.c ft_lstclear.c ft_lstmap.c \
	ft_rgbcolor.c ft_atoi_base.c ft_utoa_base.c ft_isfx_ptrmove.c ft_strrevs.c \
	ft_max.c ft_sort_rbubble.c ft_sort_selection.c ft_sort_bubble.c ft_swap.c \
	ft_sort_rinsertion.c ft_sort_insertion.c ft_sort_rselection.c ft_cswap.c \
	ft_isredirection.c ft_isquotation.c ft_strjoin2.c ft_getcwd.c ft_astrcpy.c \
	ft_astrprint.c ft_astrinit.c ft_astrfree.c ft_astrnfree.c ft_astrsize.c 

# Used in get_next_line
BUFFER_SIZE = 42
FD_SIZE = 42

FT_PRINTF_DIR = ft_printf
GET_NEXT_LINE_DIR = get_next_line
LIBFT_DIR = libft

OBJS_FT_PRINTF = $(subst .c,.o,$(SRCS_FT_PRINTF))
OBJS_GET_NEXT_LINE =$(subst .c,.o,$(SRCS_GET_NEXT_LINE))
OBJS_LIBFT =$(subst .c,.o,$(SRCS_LIBFT))

all: $(NAME)

$(NAME): $(OBJS_FT_PRINTF) $(OBJS_GET_NEXT_LINE) $(OBJS_LIBFT)
	@ar rc $@ $^
	@ranlib $(NAME)

$(OBJS_FT_PRINTF):
	@$(MAKE) $@ -C $(FT_PRINTF_DIR)
	@mv $(FT_PRINTF_DIR)/$@ .

$(OBJS_GET_NEXT_LINE):
	@$(MAKE) $@ -C $(GET_NEXT_LINE_DIR)
	@mv $(GET_NEXT_LINE_DIR)/$@ .

%.o:
	@$(MAKE) $@ -C $(LIBFT_DIR)
	@mv $(LIBFT_DIR)/$@ .

clean:
	@/bin/rm -f $(OBJS_FT_PRINTF) $(OBJS_GET_NEXT_LINE) $(OBJS_LIBFT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

f: all clean

.PHONY: all clean fclean re f
