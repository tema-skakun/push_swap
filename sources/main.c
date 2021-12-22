/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:36:57 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/22 20:30:01 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

#include <stdio.h>

void	print_content(t_data *begin)
{
	while (begin)
	{
		printf("%d\n", begin->value);
		begin = begin->next;
	}
}

int	main(int argc, char **argv)
{
	t_data	*list;

	if (argc < 3)// если передано меньше 2 аргументов - конец
		return (0);
	if (validation_check(argv))// проверка на валидные значения
	{
		write(1, "error: the string contains invalid characters\n", 46);
		exit (0);
	}
	list = create_list(argc, argv);//вызываю ф-цию создания струтуры
	if (check_dup(list))// проверка на дубли
	{
		write(1, "error: the string contains duplicates\n", 38);
		exit (0);
	}
	if (check_sort(list))// проверка на отсортированность
	{
		write(1, "the string is sorted\n", 21);
		exit (0);
	}
	sort(&list, argc);
	print_content(list);
	exit (0);
	return (0);
}
// int	main(int argc, char **argv)
// {
// 	t_data	*list_a;
// 	t_data	*list_b;

// 	if (argc < 3)// если передано меньше 2 аргументов - конец
// 		return (0);
// 	if (validation_check(argv))// проверка на валидные значения
// 	{
// 		write(1, "error: the string contains invalid characters\n", 46);
// 		exit (0);
// 	}
// 	list_a = create_list(argc, argv);//вызываю ф-цию создания струтуры
// 	//list_b = list_a;
// 	if (check_dup(list_a))// проверка на дубли
// 	{
// 		write(1, "error: the string contains duplicates\n", 38);
// 		exit (0);
// 	}
// 	if (check_sort(list_a))// проверка на отсортированность
// 	{
// 		write(1, "the string is sorted\n", 21);
// 		exit (0);
// 	}
// 	print_content(list_a);
// 	pa(&list_b, &list_a);
// 	print_content(list_b);
// 	exit (0);
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	t_data	*list;

// 	if (argc < 3)// если передано меньше 2 аргументов - конец
// 		return (0);
// 	if (validation_check(argv))// проверка на валидные значения
// 	{
// 		write(1, "error: the string contains invalid characters\n", 46);
// 		exit (0);
// 	}
// 	list = create_list(argc, argv);//вызываю ф-цию создания струтуры
// 	if (check_dup(list))// проверка на дубли
// 	{
// 		write(1, "error: the string contains duplicates\n", 38);
// 		exit (0);
// 	}
// 	if (check_sort(list))// проверка на отсортированность
// 	{
// 		write(1, "the string is sorted\n", 21);
// 		exit (0);
// 	}
// 	print_content(list);
// 	sa(&list);
// 	print_content(list);
// 	exit (0);
// 	return (0);
// }
