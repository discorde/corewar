/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:29:56 by lcaminon          #+#    #+#             */
/*   Updated: 2013/12/29 12:29:57 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*alst;

	alst = NULL;
	while (lst != NULL)
	{
		ft_lstadd(&alst, ft_lstnew((void*)f(lst), sizeof(t_list*)));
		lst = lst->next;
	}
	return (alst);
}
