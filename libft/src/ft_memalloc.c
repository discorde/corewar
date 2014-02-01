/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:30:20 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:30:21 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (size && (ptr = malloc(size)) != NULL)
		ft_bzero(ptr, size);
	return (ptr);
}
