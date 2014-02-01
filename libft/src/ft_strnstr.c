/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:36:45 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 16:30:56 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	while (n && *haystack
			&& ft_strncmp(haystack, needle, ft_strlen(needle)) != 0)
	{
		++haystack;
		--n;
	}
	if (*haystack == 0)
		return (NULL);
	return ((char *)haystack);
}
