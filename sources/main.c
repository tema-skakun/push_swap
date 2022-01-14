/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:36:57 by fdarkhaw          #+#    #+#             */
/*   Updated: 2022/01/14 13:56:02 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*list;

	if (argc < 3)
		return (0);
	if (validation_check(argv))
	{
		write(1, "Error\n", 6);
		exit (1);
	}
	list = create_list(argc, argv);
	if (check_dup(list))
	{
		write(1, "Error\n", 6);
		exit (3);
	}
	if (check_sort(list))
	{
		write(1, "Error\n", 6);
		exit (4);
	}
	sorting(&list, argc);
	exit (0);
	return (0);
}
/*
#include <stdio.h>

void	print_content(t_data *begin)
{
	while (begin)
	{
		printf("v - %d i - [%d] s - [%d]\n", begin->value, \
				begin->index, begin->score);
		begin = begin->next;
	}
	printf("\n");
}

_____in_main_____
	print_content(list);
	if (check_sort(list))// проверка на отсортированность
		printf("проверка на отсортированность:	OK =)\n");
	else
		printf("проверка на отсортированность:	KO =(\n");
*/