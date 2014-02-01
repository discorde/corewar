/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:30:08 by lcaminon          #+#    #+#             */
/*   Updated: 2014/01/11 19:12:38 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if ((lst = (t_list*)malloc(sizeof(*lst))) != NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
		lst->next = NULL;
		lst->prev = NULL;
		if (content != NULL && content_size != 0)
		{
			if ((lst->content = malloc(content_size)) != NULL)
			{
				ft_memcpy(lst->content, content, content_size);
				lst->content_size = content_size;
			}
		}
	}
	return (lst);
}
