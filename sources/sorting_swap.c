/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:25:17 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/21 23:41:42 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_data **list)
{
	t_data	*tmp;

	if ((*list)->next != NULL)
	{
		tmp = (*list)->next;
		(*list)->next = (*list)->next->next;
		tmp->next = (*list);
		(*list) = tmp;
		tmp = NULL;
	}
}

void	sa(t_data **list_a)
{
	swap(list_a);
	write (1, "sa\n", 3);
}

void	sb(t_data **list_b)
{
	swap(list_b);
	write (1, "sb\n", 3);
}

void	ss(t_data **list_a, t_data **list_b)
{
	swap(list_a);
	swap(list_b);
	write (1, "ss\n", 3);
}
/*
sa (поменять местами a): поменять местами два верхних числа в A
sb (swap b): поменять местами два верхних числа в B
ss: са + сб
pa (push a): верхнее число в B переходит в верхнюю часть A
pb (нажмите b): верхнее число в A переходит в верхнюю часть B
ra (поверните a): верхнее число в A переходит в нижнюю часть A
rb (повернуть b): верхнее число в B переходит в нижнюю часть B
rr: ra + rb
rra (обратный поворот a): нижнее число в A переходит в верхнюю часть A
rra (обратное вращение b): нижнее число в B переходит в верхнюю часть B
rrr: рра + ррб
*/