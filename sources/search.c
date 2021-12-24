/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jg <jg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:11:46 by jg                #+#    #+#             */
/*   Updated: 2021/12/23 19:36:20 by jg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	search_min(t_data **list)
{
	int	i;

	i = 2147483647;
	while ((*list))
	{
		if ((*list)->value <= i)
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
		if ((*list)->value >= i)
			i = (*list)->value;// это минимальный
		(*list) = (*list)->next;
	}
	return (i);
}
