/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:36:38 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:36:39 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = NULL;
	if (size && (ptr = (char *)malloc((size + 1) * sizeof(*ptr))) != NULL)
		ft_bzero(ptr, (size + 1) * sizeof(*ptr));
	return (ptr);
}
