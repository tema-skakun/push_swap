/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:53:36 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/16 19:41:40 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	validation_check(char **str)
{
	int		i;
	char	*s;
	size_t	a;

	i = 1;
	while (str[i])
	{
		s = ft_itoa(ft_atoi(str[i]));
		a = ft_strlen(str[i]);
		if (ft_strncmp(str[i], s, a))
			return (1);
		i++;
	}
	return (0);
}
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (n-- && (*c1 || *c2))
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
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