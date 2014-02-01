/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:35:08 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 16:30:31 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if ((str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
								* sizeof(*str))) != NULL)
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
	}
	return (str);
}
