/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_revers_rotation.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:30:06 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/24 12:44:58 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	revers_rotation(t_data **list)
{
	//t_data	*first;
	t_data	*last;
	t_data	*before_last;

	//first = *list;
	last = *list;
	before_last = *list;
	if ((*list)->next != NULL)
	{
		while (before_last->next->next)//ищу предпоследний лист
			before_last = before_last->next;
		while (last->next)//ищу последний лист
			last = last->next;
		last->next = *list;//последний лист связываю с первым
		*list = before_last->next;// указываю новое начало списка
		before_last->next = NULL;// указываю новый конец списка
	}
}

void	rra(t_data **list_a)
{
	revers_rotation(list_a);
	write (1, "rra\n", 4);
}

void	rrb(t_data **list_b)
{
	revers_rotation(list_b);
	write (1, "rrb\n", 4);
}

void	rrr(t_data **list_a, t_data **list_b)
{
	revers_rotation(list_a);
	revers_rotation(list_b);
	write (1, "rrr\n", 4);
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