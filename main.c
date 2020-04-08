/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alineayumi <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 16:00:07 by alineayum         #+#    #+#             */
/*   Updated: 2020/04/08 20:53:34 by alineayum        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	//---memset---

	char str1[100];
//	char str2[100];
	printf("---memset---\nType a string:");
	scanf("%s", str1);
	//str2 = str1;

	printf("%s\n", memset(str1, '-', 3));
	printf("%s\n", ft_memset(str1, 'X', 3));
	
	//---bzero---
	//printf("%s", 


	return (0);
}
