/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:37:24 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:37:28 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len;

	len = ft_strlen(needle);
	while (*haystack && len && ft_strncmp(haystack, needle, len) != 0)
		++haystack;
	if (*haystack == 0)
		return (NULL);
	return ((char *)haystack);
}
