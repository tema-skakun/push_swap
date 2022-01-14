/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:53:36 by fdarkhaw          #+#    #+#             */
/*   Updated: 2022/01/14 14:02:02 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	validation_check(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if ((str[i][j] == 45) && (str[i][j + 1] < 49 || str[i][j + 1] > 57))
				return (1);//если есть '-', то за ним должено стоять от '1' до '9'
			if ((str[i][j] < 48 || str[i][j] > 57) && str[i][j] != 45)
				return (1);//если символ не '-' и не от '0' до '9', то ошибка
			if ((str[i][j] == 48) && (!(str[i][j - 1])) && (str[i][j + 1]))
				return (1);//если 0, и перед ним ничего нет, и за ним что-то стоит, то ошибка
			j++;
		}
		i++;
	}
	return (0);
}

int	check_dup(t_data *list)
{
	t_data	*list_2;
	int		i;
	int		d;

	i = 0;
	d = 0;
	while (list)
	{
		list_2 = list;
		while (list_2)
		{
			if (list->value == list_2->value)
				i++;
			list_2 = list_2->next;
		}
		list = list->next;
		d++;
	}
	if (i != d)// если в списоке есть дубли - 1
		return (1);
	return (0);
}

int	check_sort(t_data *list)
{
	int		i;
	int		d;

	i = 0;
	d = 0;
	while (list->next != NULL)
	{
		d++;
		if (list->value < list->next->value)
			i++;
		list = list->next;
	}
	if (i == d)// если список отсортирован - 1
		return (1);
	return (0);
}
/*
работает корректно, но мне кажется не красивой конструкция
s = ft_itoa(ft_atoi(str[i]))
*/
// int	ft_strcmp(const char *s1, const char *s2)
// {
// 	unsigned char	*c1;
// 	unsigned char	*c2;

// 	c1 = (unsigned char *)s1;
// 	c2 = (unsigned char *)s2;
// 	while (*c1 || *c2)
// 	{
// 		if (*c1 != *c2)
// 			return (*c1 - *c2);
// 		c1++;
// 		c2++;
// 	}
// 	return (0);
// }

// int	validation_check(char **str)
// {
// 	int		i;
// 	char	*s;

// 	i = 1;
// 	while (str[i])
// 	{
// 		s = ft_itoa(ft_atoi(str[i]));
// 		if (ft_strcmp(str[i], s))
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }
