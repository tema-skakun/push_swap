/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:23:54 by fdarkhaw          #+#    #+#             */
/*   Updated: 2022/01/14 12:42:00 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	num_to_top(t_data **list, int ind)
{
	t_data	*tmp;
	int		rot;
	int		rev_rot;

	tmp = *list;
	rot = 0;
	while (tmp)
	{
		if (tmp->index == ind)
			break ;
		tmp = tmp->next;
		rot++;
	}
	rev_rot = len_list(*list) - rot;
	if (rot > rev_rot)
		return (-rev_rot);
	else
		return (rot);
}

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
		else if (search_med(&tmp, med))
		{
			if ((*list_a)->index >= med)
				pb(list_a, &list_b);
			else
				ra(list_a);
		}
		else if (!(search_med(&tmp, med)))
		{
			pb(list_a, &list_b);
			if (list_b->index > med)
				rb(&list_b);
		}
	}
	return (list_b);
}

void	sort_100500(t_data **list_a, int argc)
{
	t_data	*list_b;
	int		rot_a;
	int		rot_b;

	list_b = NULL;
	get_index(list_a, argc);
	list_b = move_from_a_to_b(list_a, list_b, argc);
	while (list_b)
	{
		fill_score(list_b);
		fill_score(*list_a);
		fill_scr_plus(list_a, list_b);
		rot_b = num_to_top(&list_b, ind_min_scr_b(list_b));
		rot_a = num_to_top(list_a, closest_ind_a(list_a, \
								ind_min_scr_b(list_b)));
		rotate_rr(list_a, &list_b, rot_a, rot_b);
		pa(list_a, &list_b);
	}
	rotate_ra(list_a, num_to_top(list_a, 0));
}
