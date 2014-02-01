/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:35:38 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:35:39 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	i = 0;
	if ((str = ft_strdup(s)))
		while (s[i])
		{
			str[i] = f(s[i]);
			++i;
		}
	return (str);
}
