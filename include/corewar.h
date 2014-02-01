/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corewar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 21:23:07 by lcaminon          #+#    #+#             */
/*   Updated: 2014/01/30 18:11:55 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			COREWAR_H
# define		COREWAR_H

# define		F_A			1
# define		F_B			2
# define		F_C			4
# define		F_D			8
# define		F_E			16
# define		F_F			32
# define		F_G			64
# define		F_H			128

# define		CARRY		F_A
# define		ALIVE		F_B

# include		<fcntl.h>

# include		"libft.h"
# include		"op.h"

typedef union	u_endi
{
	int			uint;
	char		uchar[4];
}				t_endi;

typedef struct	s_proc
{
	char		reg[REG_NUMBER][REG_SIZE];
	char		*pc;
	int			flag;
	int			cooldown;
}				t_proc;

typedef struct	s_champ
{
	char		*name;
	int			live;
}				t_champ;

typedef struct	s_vm
{
	t_list		*champ;
	t_list		*proc;
	char		*mem;
}				t_vm;

void			lfork(char *s, unsigned int pos, t_list *hproc, t_list *targ);

#endif			/* !COREWAR_H */
