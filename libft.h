/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alineayumi <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 13:11:28 by alineayum         #+#    #+#             */
/*   Updated: 2020/04/12 17:47:15 by afukuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

/*
** ------------------------ PART 1 - LIBC FUNCTIONS ---------------------------
**
** --- MEMORY FUNCTIONS ---
*/
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t count);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*
** --- STRING EXAMINATION FUNCTIONS ---
*/
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/*
** --- STRING MANIPULATION FUNCTIONS ---
*/
size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
	size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src,
	size_t dstsize);
/*
** --- CHARACTER CLASSIFICATION FUNCTIONS ---
*/
int 	ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/*
** --- NUMERIC CONVERSION FUNCTIONS ---
*/
int		ft_atoi(const char *str);
/*
** ------------------------ PART 2 - ADDITIONAL FUNCTIONS ---------------------
**
** --- MEMORY FUNCTIONS ---
*/
void	*ft_memcpy_rev(void *restrict dst, const void *restrict src, size_t n);
/*
** --- CHARACTER CLASSIFICATION FUNCTIONS ---
*/
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isspace(int c);
/*
** --- NUMERIC CONVERSION FUNCTIONS ---
*/
int		ft_atoi_base(const char *str, int base);
#endif
