/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaminon <lcaminon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 18:52:03 by lcaminon          #+#    #+#             */
/*   Updated: 2014/02/01 16:00:46 by lcaminon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"corewar.h"

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
*/
int			main(int ac, char **av)
{
/*
	t_vm	vm;

	if (parser(ac, av, &init) == -1)
		return (EXIT_FAILURE);
	if (init(ac, av, &vm) == -1)
		return (EXIT_FAILURE);
	free(vm->mem);
	lst_del(champ, NULL);
	lst_del(proc, NULL);
*/
	(void)ac;
	(void)av;
	ft_printf("caca\n");
	return (EXIT_SUCCESS);
}
