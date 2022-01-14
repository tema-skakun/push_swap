/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_scr_and_last_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 10:59:29 by fdarkhaw          #+#    #+#             */
/*   Updated: 2022/01/14 11:13:48 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fill_score(t_data *list)
{
	int		scr;
	int		med;
	int		len;

	scr = 0;
	len = len_list(list);
	med = len / 2;
	while (scr <= med)
	{
		list->score = scr;
		scr++;
		list = list->next;
	}
	if (len % 2 != 0)// нечётный случай
		scr -= 1;
	else// чётный случай
		scr -= 2;
	while (scr)
	{
		list->score = scr;
		scr--;
		list = list->next;
	}
}

void	fill_scr_plus(t_data **list_a, t_data *list_b)
{
	t_data	*tmp_b;

	tmp_b = list_b;
	while (tmp_b)
	{
		tmp_b->score += closest_scr_a(list_a, tmp_b->index);
		tmp_b = tmp_b->next;
	}
}

void	rotate_ra(t_data **list_a, int r_a)
{	
	while (r_a)
	{
		if (r_a > 0)
		{
			ra(list_a);
			r_a--;
		}
		else
		{
			rra(list_a);
			r_a++;
		}
	}
}

void	rotate_rb(t_data **list_b, int r_b)
{
	while (r_b)
	{
		if (r_b > 0)
		{
			rb(list_b);
			r_b--;
		}
		else
		{
			rrb(list_b);
			r_b++;
		}
	}
}

void	rotate_rr(t_data **list_a, t_data **list_b, int r_a, int r_b)
{
	while (r_a > 0 && r_b > 0)
	{
		rr(list_a, list_b);
		r_a--;
		r_b--;
	}
	while (r_a < 0 && r_b < 0)
	{
		rrr(list_a, list_b);
		r_a++;
		r_b++;
	}
	rotate_ra(list_a, r_a);
	rotate_rb(list_b, r_b);
}
