/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alineayumi <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 13:11:28 by alineayum         #+#    #+#             */
/*   Updated: 2020/04/20 14:54:46 by afukuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

/*
** ------------------------ PART 1 - LIBC FUNCTIONS ---------------------------
**
** --- MEMORY FUNCTIONS ---
*/
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *restrict dst, const void *restrict src,
	size_t n);
void				*ft_memccpy(void *restrict dst, const void *restrict src,
	int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t count);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
/*
** --- STRING EXAMINATION FUNCTIONS ---
*/
size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
	size_t len);
char				*ft_strstr(const char *haystack, const char *needle);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
/*
** --- STRING MANIPULATION FUNCTIONS ---
*/
char				*ft_strcat(char *restrict s1, const char *restrict s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strncat(char *restrict s1, const char *restrict s2,
	size_t n);
size_t				ft_strlcpy(char *restrict dst, const char *restrict src,
	size_t dstsize);
size_t				ft_strlcat(char *restrict dst, const char *restrict src,
	size_t dstsize);
char				*ft_strdup(const char *s1);
void				ft_strclr(char *str);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
/*
** --- CHARACTER CLASSIFICATION FUNCTIONS ---
*/
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
/*
** --- NUMERIC CONVERSION FUNCTIONS ---
*/
int					ft_atoi(const char *str);
/*
** ------------------------ PART 2 - ADDITIONAL FUNCTIONS ---------------------
**
** --- MEMORY FUNCTIONS ---
*/
void				*ft_memcpy_rev(void *restrict dst,
	const void *restrict src, size_t n);
/*
** --- CHARACTER CLASSIFICATION FUNCTIONS ---
*/
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isspace(int c);
/*
** --- NUMERIC CONVERSION FUNCTIONS ---
*/
int					ft_atoi_base(const char *str, int base);
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int base);
int					ft_numdig(int n, int base);
/*
** --- STRING MANIPULATION FUNCTIONS ---
*/
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strnew(size_t size);
void				ft_strdel(char **str);
/*
** --- STRING EXAMINATION FUNCTIONS ---
*/
size_t				ft_countword(char const *s, char c);
/*
** --- WRITE FUNCTIONS ---
*/
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar(char c);
void				ft_putstr(char *s);
void				ft_putendl(char *s);
void				ft_putnbr(int n);
/*
** --------------------- BONUS PART -------------------------------------------
**
** --- STRUCT ---
*/
typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
/*
** --- FUNCTIONS ---
*/
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdel(t_list **alst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
	void (*del)(void *));
int					ft_lstsize(t_list *lst);
#endif
