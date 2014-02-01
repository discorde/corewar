/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:34:25 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:41:58 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strdup(const char *s)
{
	char	*tmp;

	if ((tmp = (char *)malloc(ft_strlen(s) + 1 * sizeof(*s))) != NULL)
		ft_memcpy(tmp, s, ft_strlen(s) + 1);
	return (tmp);
}
