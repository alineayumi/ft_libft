/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afukuhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 21:55:46 by afukuhar          #+#    #+#             */
/*   Updated: 2020/04/10 23:52:45 by afukuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n_len;
	void *max_haystack;

	n_len = ft_strlen(needle);
	if (!n_len)
		return ((char *)haystack);
	while (*max_haystack)
	{
		if (ft_strncmp(needle, max_haystack, n_len - 1) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/**/
int main()
{
	char	*s1 = "MZIRIBMZIRIBMZE123";
	char	*s2 = "MZIRIBMZE";
	size_t	max = strlen(s2);
	
	printf("%s\nend", strnstr(s1, s2, max));
	printf("%s", ft_strnstr(s1, s2, max));

	return (0);
}/**/
