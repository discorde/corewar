/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:31:35 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:31:36 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	while (n > 0)
	{
		*((char*)s + --n) = (char)c;
	}
	return (s);
}
