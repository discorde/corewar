/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   endian_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 14:26:37 by lcaminon          #+#    #+#             */
/*   Updated: 2014/02/01 14:28:30 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"corewar.h"

int				convert_l_to_b(int nbr)
{
	t_endi		conv;
	t_endi		ret;

	conv.uint = nbr;
	ret.uchar[0] = conv.uchar[3];
	ret.uchar[1] = conv.uchar[2];
	ret.uchar[2] = conv.uchar[1];
	ret.uchar[3] = conv.uchar[0];
	return (ret.uint);
}
