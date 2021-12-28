/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:25:17 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/27 13:16:16 by fdarkhaw         ###   ########.fr       */
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