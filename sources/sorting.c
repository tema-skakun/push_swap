/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:14:28 by fdarkhaw          #+#    #+#             */
/*   Updated: 2022/01/14 12:44:03 by fdarkhaw         ###   ########.fr       */
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
	if (!(*list)->next->next)
	{
		sb(list);
		return ;
	}
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

void	sort_6(t_data **list_a)
{
	t_data	*list_b;
	int		i;

	list_b = NULL;
	i = 0;
	while (len_list(*list_a) > 3)
		pb(list_a, &list_b);
	if (!(check_sort(*list_a)))
		sort_3(list_a);
	if (!(check_sort(list_b)))
		sort_3(&list_b);
	while (list_b && len_list(*list_a) > i++)
	{
		if ((*list_a)->value > list_b->value)
			pa(list_a, &list_b);
		ra(list_a);
	}
	while (list_b)
	{
		pa(list_a, &list_b);
		ra(list_a);
	}
	while (!(check_sort(*list_a)))
		ra(list_a);
}

void	sorting(t_data **list, int argc)
{
	if (argc == 3)
		sa(list);
	else if (argc == 4)
		sort_3(list);
	else if (argc <= 7)
		sort_6(list);
	else if (argc > 7)
		sort_100500(list, argc);
}
