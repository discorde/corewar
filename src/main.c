/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 18:52:03 by lcaminon          #+#    #+#             */
/*   Updated: 2014/01/30 18:05:47 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"corewar.h"

int			convert_l_to_b(int nbr)
{
	t_endi	conv;
	t_endi	ret;

	conv.uint = nbr;
	ret.uchar[0] = conv.uchar[3];
	ret.uchar[1] = conv.uchar[2];
	ret.uchar[2] = conv.uchar[1];
	ret.uchar[3] = conv.uchar[0];
	return (ret.uint);
}

int main()
{
	int fd;
	int nbr;

	fd = open("caca2", O_WRONLY | O_CREAT);
	nbr = convert_l_to_b(COREWAR_EXEC_MAGIC);
	write(fd, &nbr, sizeof(int));
	close(fd);
	return (0);
}

/*
static int	init(int ac, char **av, t_vm *vm)
{
	if ((vm->mem = malloc(sizeof(*(vm->mem)) * MEM_SIZE)) == NULL)
		return (-1);
	vm->champ = NULL;
	vm->proc = NULL;
	if (get_champ(ac, av, vm) == -1)
	{
		free(vm->mem);
		return (-1);
	}
	return (0);
}

int			main(int ac, char **av)
{
	t_vm	vm;

	if (init(ac, av, &vm) == -1)
		return (-1);
	free(vm->mem);
	lst_del(champ, NULL);
	lst_del(proc, NULL);
	return (0);
}
*/
