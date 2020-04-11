/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afukuhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 18:03:52 by afukuhar          #+#    #+#             */
/*   Updated: 2020/04/11 19:58:30 by afukuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	nbr;
	int			signal;

	nbr = 0;
	signal = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		signal = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		nbr = 10 * nbr + (*str - '0');
		str++;
	}
	if (nbr < 0)
		return (signal == -1 ? 0 : -1);
	return (nbr * signal);
}
