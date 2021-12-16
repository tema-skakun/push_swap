/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:36:57 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/16 18:38:23 by fdarkhaw         ###   ########.fr       */
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

	if (argc < 3)
		return (0);// если аргументов меньше 2 - конец
	if (validation_check(argv))
		return (0);
	list = create_list(argc, argv);//вызываю ф-цию создания струтуры
	print_content(list);//печатаю значения структуры в том порядке в каком получил
	return (0);
}

// int	main(void)
// {
// 	t_list	*a1;
// 	t_list	*a2;
// 	char	*b = "123";
// 	char	*c = "456";
// 	char	*d = "789";

// 	a1 = ft_lstnew(b);
// 	a1->next = ft_lstnew(c);
// 	print_content(a1);
// 	printf("\n");
// 	a2 = ft_lstnew(d);
// 	print_content(a2);
// 	printf("\n");
// 	ft_lstadd_back(&a1, a2);
// 	print_content(a1);
// 	return (0);
// }