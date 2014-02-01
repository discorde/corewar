/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:31:19 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:31:20 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;

	if ((tmp = malloc(n)) != NULL)
	{
		ft_memcpy(tmp, src, n);
		ft_memcpy(dest, tmp, n);
		free(tmp);
	}
	return (dest);
}
