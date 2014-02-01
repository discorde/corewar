/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:34:56 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:34:57 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		++i;
	}
}