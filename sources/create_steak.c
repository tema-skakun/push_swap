/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_steak.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:54:14 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/16 16:42:04 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	fill_list(t_data *list, char *str)
{
	int			i;
	long int	inp_val;

	i = 1;
	inp_val = ft_atoi(str);
	if (inp_val > 2147483647 || inp_val < -2147483648)
		return (1);
	list->value = inp_val;
	list->index = i++;
	list->flag = 0;
	list->next = NULL;
	return (0);
}

t_data	*create_list(int argc, char **argv)
{
	t_data			*list;
	t_data			*tmp;
	int				i;

	i = 1;
	tmp = (t_data *)malloc(sizeof(t_data));
	list = tmp;
	if (fill_list(tmp, argv[i]))
		return (0);
	while (argc > 2)
	{
		i++;
		tmp->next = (t_data *)malloc(sizeof(t_data));
		tmp = tmp->next;
		if (fill_list(tmp, argv[i]))
			return (0);
		argc--;
	}
	return (list);
}
