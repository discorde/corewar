/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:33:35 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:33:36 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strcat(char *dest, const char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}
