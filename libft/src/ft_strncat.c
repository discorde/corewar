/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:35:53 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:35:54 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	ft_memccpy(dest + i, src, 0, n);
	if (j > n)
		dest[i + n + 1] = 0;
	else
		dest[i + j + 1] = 0;
	return (dest);
}
