/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:34:08 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:34:09 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strcpy(char *dest, const char *src)
{
	ft_memcpy(dest, src, ft_strlen(src) + 1);
	return (dest);
}
