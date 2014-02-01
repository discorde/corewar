/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:26:36 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 16:29:58 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int			ft_atoi(const char *nptr)
{
	int		nbr;
	int		sign;
	size_t	i;

	i = 0;
	nbr = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' ||
			nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
		++i;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		++i;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = (nbr * 10) + (nptr[i] - '0');
		++i;
	}
	return (nbr * sign);
}
