/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_steak.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:54:14 by fdarkhaw          #+#    #+#             */
/*   Updated: 2022/01/14 13:57:18 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long long	ft_atoi(const char *str)
{
	long long	res;
	int			neg;

	res = 0;
	neg = 1;
	while ((*str == ' ') || (*str == '\n') || (*str == '\t') \
			|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * neg);
}

int	fill_list(t_data *list, char *str)
{
	long int	inp_val;

	inp_val = ft_atoi(str);
	if (inp_val > 2147483647 || inp_val < -2147483648)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	list->value = inp_val;
	list->index = -1;
	list->score = 0;
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
		exit (2);
	while (argc > 2)
	{
		i++;
		tmp->next = (t_data *)malloc(sizeof(t_data));
		tmp = tmp->next;
		if (fill_list(tmp, argv[i]))
			exit (2);
		argc--;
	}
	return (list);
}
