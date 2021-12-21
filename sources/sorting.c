/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:14:28 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/21 23:54:46 by fdarkhaw         ###   ########.fr       */
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

void	sort(t_data **list)
{
	int	length;

	length = len_list(*list);
	if (length == 2)
		sa(list);
	else if (length == 3)
		sort_3(list);
}
