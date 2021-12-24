/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:11:46 by jg                #+#    #+#             */
/*   Updated: 2021/12/24 22:04:00 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	search_min(t_data **list)
{
	int	i;

	i = 2147483647;
	while ((*list))
	{
		if ((*list)->value < i)
			i = (*list)->value;// это минимальный
		(*list) = (*list)->next;
	}
	return (i);
}

int	search_max(t_data **list)
{
	int	i;

	i = -2147483648;
	while ((*list))
	{
		if ((*list)->value > i)
			i = (*list)->value;// это минимальный
		(*list) = (*list)->next;
	}
	return (i);
}

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
			if (tmp->value < i && tmp->position == -1)
			{
				i = tmp->value;
				min_node = tmp;
			}
			tmp = tmp->next;
		}
		min_node->position += j++;
		n--;
	}
}
