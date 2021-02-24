/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atemfack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:29:47 by atemfack          #+#    #+#             */
/*   Updated: 2021/02/11 03:14:21 by atemfack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define PATH_MAX 4096

/*
** Structure
*/
typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** Memory manipulation
*/
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, void const *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, void const *src, size_t len);
void				*ft_memchr(void const *s, int c, size_t n);
int					ft_memcmp(void const *s1, void const *s2, size_t n);

/*
** Memory allocation and clean
*/
void				*ft_calloc(size_t nmemb, size_t size);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_stralloc(char **str, size_t size);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);

/*
** Char manipulation and identity
*/
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isspace(int c);
int					ft_isredirection(char c);
int					ft_isquotation(char c);
int					ft_isnumber(char *str);

/*
** String manipulation
*/
char				*ft_isfx_ptrmove(char const *str, int (*f1)(int),
						int (*f2)(int));
size_t				ft_strlen(char const *s);
char				*ft_strdelchr(char *str, char c);
char				*ft_strappend(char *dest, char const *src);
char				*ft_strappend2(char *dest, char const *src,
						size_t destlenmax);
char				*ft_strcpy(char *dest, char const *src);
size_t				ft_strlcpy(char *dst, char const *src, size_t size);
char				*ft_strcat(char *s1, char const *s2);
size_t				ft_strlcat(char *dest, char const *src, size_t l);
char				*ft_strchr(char const *s, int c);
char				*ft_strrchr(char const *s, int c);
char				*ft_strstr(char const *haystack, char const *needle);
char				*ft_strnstr(char const *haystack, char const *needle,
						size_t len);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
int					ft_atoi(char const *str);
char				*ft_strdup(char const *s1);
char				*ft_strndup(char const *s1, size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin2(char const *s1, char const *s2,
						char const *s3);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				**ft_split2(char const *s, char c, int (*fx)(char));
char				**ft_split3(char const *s, char c, int (*fx)(char),
						int (*fy)(char));
char				*ft_itoa(int n);
int					ft_atoi_base(char const *str, int base);
char				*ft_utoa_base(unsigned int nb, int base);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** Output
*/
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
** Link list
*/
t_list				*ft_lstnew(void *content);
t_list				*ft_lstnew2(void *content);
t_list				*ft_lstnew3(char *begin, char *end);
void				ft_lstprint(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *nw);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *nw);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
t_list				*ft_lstdelhead(t_list **lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

void				ft_swap(int *a, int *b);
void				ft_cswap(char *c1, char *c2);
int					ft_max(int a, int b);
char				*ft_strrevs(char *str);
void				ft_sort_selection(int *tab, int size);
void				ft_sort_rselection(int *tab, int size);
void				ft_sort_bubble(int *tab, int size);
void				ft_sort_rbubble(int *tab, int size);
void				ft_sort_insertion(int *tab, int size);
void				ft_sort_rinsertion(int *tab, int size);

/*
** Others
*/
void				*ft_ternary(int logic, void *value1, void *value2);
int					ft_rgbcolor(unsigned short r, unsigned short g,
						unsigned short b);

char				*ft_getcwd(void);

void				ft_astrprint(char **s);
char				**ft_astrinit(int size);
void				ft_astrfree(char ***astr, void (*del)(void *));
void				ft_astrnfree(char ***astr, int n);
char				**ft_astrdup(char **astr);
size_t				ft_astrsize(char **astr);
int					ft_astrcpy(char **dest, char **src);
int					ft_astrtolst(t_list **lst, char **astr);
char				**ft_lsttoastr(t_list *lst);

#endif
