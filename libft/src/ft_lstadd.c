/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 12:29:03 by lcaminon          #+#    #+#             */
/*   Updated: 2014/01/11 19:08:42 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	(*alst)->prev = new;
	new->prev = NULL;
	*alst = new;
}
