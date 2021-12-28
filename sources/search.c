/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:11:46 by jg                #+#    #+#             */
/*   Updated: 2021/12/28 15:59:34 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	search_min(t_data **list)
// {
// 	int	min;

// 	min = 2147483647;
// 	while ((*list))
// 	{
// 		if ((*list)->index < min)
// 			min = (*list)->index;// это минимальный
// 		(*list) = (*list)->next;
// 	}
// 	return (min);
// }

// int	search_max(t_data **list)
// {
// 	int	max;

// 	max = -2147483648;
// 	while ((*list))
// 	{
// 		if ((*list)->index > max)
// 			max = (*list)->index;// это максимальный
// 		(*list) = (*list)->next;
// 	}
// 	return (max);
// }

// int	search_med(int min, int max)
// {
// 	return ((max + min + 1) / 2);
// }

void	get_position(t_data **list, int n)
{
	t_data	*tmp;
	t_data	*min_node;
	int		i;
	int		j;

	j = 1;
	while (n - 1)
	{
		tmp = *list;
		i = 2147483647;
		while (tmp)
		{
			if (tmp->value < i && tmp->index == -1)
			{
				i = tmp->value;
				min_node = tmp;
			}
			tmp = tmp->next;
		}// изменяю и увеличиваю position минимального значения
		min_node->index += j++;
		n--;
	}
}

// int	search_position(t_data **list, int val)
// {
// 	int	pos;

// 	pos = 1;
// 	while ((*list)->index != val)
// 	{
// 		(*list) = (*list)->next;
// 		pos++;
// 	}
// 	return (pos);
// }

int	search_position(t_data **list, int val)
{
	while ((*list)->next)
	{
		if ((*list)->index == val)
			return (1);
		(*list) = (*list)->next;
	}
	return (0);
}
