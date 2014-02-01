/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:41:33 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:41:33 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void		*ft_memrchr(const void *s, int c, size_t n)
{
	while (--n > 0)
		if (*((unsigned char *)s + n) == (unsigned char)c)
			return ((void *)(s + n));
	if (*((unsigned char *)s + n) == (unsigned char)c)
		return ((void *)(s + n));
	return (NULL);
}
