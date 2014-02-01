/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:37:35 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:37:36 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if ((str = (char *)malloc((len + 1) * sizeof(*str))) != NULL)
	{
		ft_strncpy(str, s + start, len);
		str[len] = 0;
	}
	return (str);
}
