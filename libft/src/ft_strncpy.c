/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:36:13 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:36:14 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	ft_memccpy(dest, src, 0, n);
	i = ft_strlen(src);
	if (n > i)
		ft_bzero(dest + i, n - i);
	return (dest);
}
