/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:37:13 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 16:31:28 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft.h"

static int		count_cases(char const *s, char *str)
{
	size_t		i;
	size_t		cmpt;

	i = 0;
	cmpt = 0;
	while (s[i])
	{
		if ((i == 0 || ft_strchr(str, s[i - 1]))
			&& ft_strchr(str, s[i]) == NULL)
			++cmpt;
		++i;
	}
	return (cmpt);
}

static size_t	search_last(char const *s, char *str)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(str, s[i]))
			return (i);
		++i;
	}
	return (i);
}

char			**ft_strsplitstr(char const *s, char *str)
{
	size_t		i;
	size_t		cmpt;
	char		**tab;

	i = 0;
	cmpt = count_cases(s, str);
	if ((tab = (char **)malloc((cmpt + 1) * sizeof(*tab))) != NULL)
	{
		tab[cmpt] = NULL;
		i = 0;
		cmpt = 0;
		while (s[i])
		{
			if ((i == 0 || ft_strchr(str, s[i - 1]))
				&& ft_strchr(str, s[i]) == NULL)
			{
				tab[cmpt] = ft_strsub(s, i, search_last(s + i, str));
				++cmpt;
			}
			++i;
		}
	}
	return (tab);
}
