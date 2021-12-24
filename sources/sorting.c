/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:14:28 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/24 22:05:08 by fdarkhaw         ###   ########.fr       */
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

void	sort_5(t_data **list_a)
{
	t_data	*list_b;
	int		i;

	list_b = NULL;
	while (len_list(*list_a) > 3)// пока элементов в А > 3 пушу в Б
		pb(list_a, &list_b);
	if (!(check_sort(*list_a))) // если А не отсортирован - сортирую его
		sort_3(list_a);
	if (!(check_sort(list_b))) // если Б не отсортирован - сортирую его
		sb(&list_b);
	i = 0;
	while (list_b && i < len_list(*list_a))	// пока лист Б существует ИИ i < длинны листа А
	{
		if ((*list_a)->value > list_b->value)
			pa(list_a, &list_b);
		ra(list_a);
		i++;
	}
	while (list_b)
	{
		pa(list_a, &list_b);
		ra(list_a);
	}
	while (!(check_sort(*list_a)))
		ra(list_a);
}

void	sort(t_data **list, int argc)
{
	if (argc == 3)
		sa(list);
	else if (argc == 4)
		sort_3(list);
	else if (argc == 6)
		sort_5(list);
	else if (argc <= 101)
		get_position(list, argc);
}
