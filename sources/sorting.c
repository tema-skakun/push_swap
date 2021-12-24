/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jg <jg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:14:28 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/23 20:50:07 by jg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	len_list(t_data *list)
{
	int	len;

	len = 1;
	while (list->next)
	{
		list = list->next;
		len++;
	}
	return (len);
}

void	sort_3(t_data **list)
{
	if ((*list)->value < (*list)->next->value)
	{
		rra(list);
		if (!(check_sort(*list)))
			sa(list);
	}
	else if (((*list)->value > (*list)->next->value) && \
			((*list)->value > (*list)->next->next->value))
	{
		ra(list);
		if (!(check_sort(*list)))
			sa(list);
	}
	else
		sa(list);
}

#include <stdio.h>

void	sort_5(t_data **list_a)
{
	t_data	**list_b;
	int		i;

	i = 0;
	list_b = (t_data **)malloc(sizeof(t_data));
	while (len_list(*list_a) > 3)
		pb(list_a, list_b);
	if (!(check_sort(*list_a)))
		sort_3(list_a);
	if (!(check_sort(*list_b)))
		sa(list_b);
	while (!(len_list(*list_a) == 5))
	{
		if ((*list_a)->value > (*list_b)->value)
			pa(list_a, list_b);
		else if (search_max(list_a) < (*list_b)->value \
				&& (*list_a)->value == search_min(list_a))
			pa(list_a, list_b);
		ra(list_a);
	}
	// while (!(check_sort(*list_a)))
	// 	ra(list_a);
	printf("list_b\n");
	print_content(*list_b);
	printf("list_a\n");
	print_content(*list_a);
}

void	sort(t_data **list, int argc)
{
	if (argc == 3)
		sa(list);
	else if (argc == 4)
		sort_3(list);
	else if (argc == 6)
		sort_5(list);
}
