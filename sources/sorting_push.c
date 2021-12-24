/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:17:45 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/24 12:54:04 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_data **list_a, t_data **list_b)
{
	t_data	*tmp;

	if (list_a && list_b)
	{
		tmp = (*list_b);
		(*list_b) = tmp->next;
		tmp->next = (*list_a);
		(*list_a) = tmp;
		tmp = NULL;
	}
}

void	pa(t_data **list_a, t_data **list_b)
{
	push(list_a, list_b);
	write (1, "pa\n", 3);
}

void	pb(t_data **list_a, t_data **list_b)
{
	push(list_b, list_a);
	write (1, "pb\n", 3);
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