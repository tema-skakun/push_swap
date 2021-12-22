/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:14:28 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/22 18:27:04 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	len_list(t_data *list)
// {
// 	int	len;

// 	len = 1;
// 	while (list->next)
// 	{
// 		list = list->next;
// 		len++;
// 	}
// 	return (len);
// }

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

void	sort_4(t_data **list_a, int argc)
{
	t_data	**list_b;
	int		i;

	i = 0;
	list_b = (t_data **)malloc(sizeof(t_data));
	// while (i > 5)
	// {
	// 	(*list_b)->next = (t_data *)malloc(sizeof(t_data));
	// 	(*list_b) = (*list_b)->next;
	// 	i--;
	// }
	pb(list_a, list_b);
	if (!(check_sort(*list_a)))
		sort_3(list_a);
	while ((*list_a)->value < (*list_b)->value && i != argc - 2)
	{
		rra(list_a);
		i++;
	}
	pa(list_a, list_b);
	while (!(check_sort(*list_a)))
		ra(list_a);
}

void	sort(t_data **list, int argc)
{
	if (argc == 3)
		sa(list);
	else if (argc == 4)
		sort_3(list);
	else if (argc == 5)
		sort_4(list, argc);
	// else if (argc == 6)
	// 	sort_5();
}
