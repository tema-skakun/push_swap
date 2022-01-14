/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:11:46 by jg                #+#    #+#             */
/*   Updated: 2022/01/14 11:22:29 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_index(t_data **list, int argc)
{
	t_data	*tmp;
	t_data	*min_node;
	int		i;
	int		j;

	j = 1;
	while (argc - 1)
	{
		tmp = *list;
		i = 2147483647;
		while (tmp)
		{
			if (tmp->value <= i && tmp->index == -1)
			{
				i = tmp->value;
				min_node = tmp;
			}
			tmp = tmp->next;
		}// изменяю и увеличиваю index минимального значения
		min_node->index += j++;
		argc--;
	}
}

int	search_med(t_data **list, int val)
{
	while ((*list)->next)
	{
		if ((*list)->index == val)
			return (1);
		(*list) = (*list)->next;
	}
	return (0);
}

int	closest_ind_a(t_data **list_a, int ind_b)
{
	t_data	*tmp;
	int		ind_a;

	tmp = *list_a;
	ind_a = 1000;
	while (tmp)
	{
		if (tmp->index > ind_b && tmp->index < ind_a)
			ind_a = tmp->index;
		tmp = tmp->next;
	}
	return (ind_a);
}

int	closest_scr_a(t_data **list_a, int ind)
{
	t_data	*tmp;
	int		scr;

	tmp = *list_a;
	scr = 1000;
	while (tmp)
	{
		if (tmp->index > ind && tmp->index < scr)
			scr = tmp->score;
		tmp = tmp->next;
	}
	return (scr);
}

int	ind_min_scr_b(t_data *list_b)
{
	t_data	*tmp;
	int		min_scr;
	int		min_ind;

	min_scr = 1000;
	tmp = list_b;
	while (tmp)
	{
		if (tmp->score < min_scr)
		{
			min_scr = tmp->score;
			min_ind = tmp->index;
		}
		tmp = tmp->next;
	}
	return (min_ind);
}
