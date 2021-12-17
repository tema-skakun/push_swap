/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:53:36 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/17 21:50:06 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (*c1 || *c2)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
	}
	return (0);
}

int	validation_check(char **str)
{
	int		i;
	char	*s;

	i = 1;
	while (str[i])
	{
		s = ft_itoa(ft_atoi(str[i]));
		if (ft_strcmp(str[i], s))
			return (1);
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
	if (i != d)
		return (1);
	return (0);
}

int	check_sort(t_data *list)
{
	int		i;
	int		d;

	i = 0;
	d = 0;
	while (list->next)
	{
		d++;
		if (list->value < list->next->value)
			i++;
		list = list->next;
	}
	if (i == d)
		return (1);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	t_data	*list;
	int		i;

	if (argc < 3)
		return (0);// если аргументов меньше 2 - конец
	list = create_list(argc, argv);//вызываю ф-цию создания струтуры
	i = check_dup(list);
	printf("%d", i);
	return (0);
}
*/

/* не корректно работает, с '-' без числа
int	validation_check(char **str)
{
	int		i;
	int		j;
	char	*base;

	base = "0123456789-";
	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!ft_strchr(base, str[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


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
		// if (res * neg > 0 && neg == -1)
		// 	return (0);
		// if (res * neg < 0 && neg == 1)
		// 	return (-1);
	}
	return (res * neg);
}

char	*fill_array(char *str, unsigned int n, int len)
{
	while (n > 0)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

size_t	numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*res;
	unsigned int	number;

	len = numlen(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len--] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		number = -n;
		res[0] = '-';
	}
	else
		number = n;
	res = fill_array(res, number, len);
	return (res);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = validation_check(argv);
	printf("%d", i);
	return (0);
}
*/