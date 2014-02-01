/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 19:22:19 by lcaminon          #+#    #+#             */
/*   Updated: 2014/02/01 19:24:57 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"libft.h"

unsigned int		ft_atoui(const char *nptr)
{
	unsigned int	nbr;
	size_t			i;

	nbr = 0;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' ||
		   nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
		++i;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = (nbr * 10) + (nptr[i] - '0');
		++i;
	}
	return (nbr);
}
