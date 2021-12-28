/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:23:54 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/27 16:21:45 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

#include <stdio.h>
void	rotat(t_data **list_a)
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
	print_content(list_b);
	while (list_b)
	{
		pa(list_a, &list_b);
	}
}
