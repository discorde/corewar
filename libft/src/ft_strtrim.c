/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:37:41 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:37:42 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"libft.h"

char				*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			n;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		++i;
	n = 0;
	while (s[i + n] != ' ' || s[i + n] != '\n' || s[i + n] != '\t')
		++n;
	return (ft_strsub(s, i, n));
}
