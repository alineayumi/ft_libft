/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afukuhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 21:13:38 by afukuhar          #+#    #+#             */
/*   Updated: 2020/04/10 21:48:05 by afukuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n && *s1 == *s2 && *s1 && *s2)
	{
		n--;
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
