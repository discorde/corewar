/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:30:59 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:31:00 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		--n;
		*((char*)dest + n) = *((char*)src + n);
	}
	return (dest);
}
