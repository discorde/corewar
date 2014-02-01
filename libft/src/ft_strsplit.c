/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:37:07 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:37:08 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	count_cases(char const *s, char c)
{
	size_t	i;
	size_t	cmpt;

	i = 0;
	cmpt = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			++cmpt;
		++i;
	}
	return (cmpt);
}

static size_t	search_last(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] && s[i] != c)
		++i;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	cmpt;
	char	**tab;

	i = 0;
	cmpt = count_cases(s, c);
	if ((tab = (char **)malloc((cmpt + 1) * sizeof(*tab))) != NULL)
	{
		tab[cmpt] = 0;
		i = 0;
		cmpt = 0;
		while (s[i])
		{
			if ((i == 0 || s[i - 1] == c) && s[i] != c)
			{
				tab[cmpt] = ft_strsub(s, i, search_last(s + i, c));
				++cmpt;
			}
			++i;
		}
	}
	return (tab);
}
