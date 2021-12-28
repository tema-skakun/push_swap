/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:23:54 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/28 18:42:48 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

#include <stdio.h>

t_data	*move_from_a_to_b(t_data **list_a, t_data *list_b, int argc)
{
	t_data	*tmp;
	int		med;

	med = (argc - 1) / 2;
	while ((*list_a)->next->next)
	{
		tmp = *list_a;
		if ((*list_a)->index == 0 || (*list_a)->index == argc - 2)
			ra(list_a);
		else if (search_position(&tmp, med))
		{
			if ((*list_a)->index >= med)
				pb(list_a, &list_b);
			else
				ra(list_a);
		}
		else if (!(search_position(&tmp, med)))
		{
			pb(list_a, &list_b);
			if (list_b->index > med)
				rb(&list_b);
		}
	}
	return (list_b);
}

void	sort_100(t_data **list_a, int argc)
{
	t_data	*list_b;

	list_b = NULL;
	list_b = move_from_a_to_b(list_a, list_b, argc);
	if (check_sort(*list_a))
		ra(list_a);// если список отсортирован надо его испортить
	print_content(*list_a);
	print_content(list_b);
}

/* ~1500 операций
void	sort_100(t_data **list_a)
{
	t_data	*list_b;
	t_data	*tmp;
	int		min;
	int		s_p;

	list_b = NULL;
	min = 0;
	while ((*list_a)->next)
	{
		tmp = *list_a;
		s_p = search_position(&tmp, min);
		if ((*list_a)->index == min)
		{
			pb(list_a, &list_b);
			min++;
		}
		else if (len_list(*list_a) >= s_p * 2)
			ra(list_a);
		else if (len_list(*list_a) < s_p * 2)
			rra(list_a);
	}
	while (list_b)
		pa(list_a, &list_b);
}
*/