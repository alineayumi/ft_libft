/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alineayumi <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 13:11:28 by alineayum         #+#    #+#             */
/*   Updated: 2020/04/10 14:59:39 by afukuhar         ###   ########.fr       */
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
/*
** ------------------------ PART 2 - ADDITIONAL FUNCTIONS ---------------------
**
** --- MEMORY FUNCTIONS ---
*/
void	*ft_memcpy_rev(void *restrict dst, const void *restrict src, size_t n);

#endif
