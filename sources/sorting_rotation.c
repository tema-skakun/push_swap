/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:25:17 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/28 15:54:52 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotation(t_data **list)
{
	t_data	*first;
	t_data	*last;

	first = *list;
	last = *list;
	if ((*list)->next != NULL)
	{
		while (last->next)// ищу последний лист списка
			last = last->next;
		last->next = first;// последний лист связывается с первым
		*list = first->next;// указываю новое начало списка
		first->next = NULL;// указываю новый конец списка
	}
}

void	ra(t_data **list_a)
{
	rotation(list_a);
	write (1, "ra\n", 3);
}

void	rb(t_data **list_b)
{
	rotation(list_b);
	write (1, "rb\n", 3);
}

void	rr(t_data **list_a, t_data **list_b)
{
	rotation(list_a);
	rotation(list_b);
	write (1, "rr\n", 3);
}
/*
sa: поменять местами два верхних числа в A
sb: поменять местами два верхних числа в B
ss: са + сб
pa: верхнее число из B переходит в верхнюю часть A
pb: верхнее число из A переходит в верхнюю часть B
ra: верхнее число в A переходит в нижнюю часть A
rb: верхнее число в B переходит в нижнюю часть B
rr: ra + rb
rra: нижнее число в A переходит в верхнюю часть A
rra: нижнее число в B переходит в верхнюю часть B
rrr: рра + ррб
*/