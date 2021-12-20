/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:03:57 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/20 17:59:56 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_data
{
	int				value;
	int				index;
	int				flag;
	struct s_data	*next;
}				t_data;

t_data	push_swap(int argc, char **argv);
t_data	*create_list(int argc, char **argv);
int		fill_list(t_data *list, char *str);
int		validation_check(char **str);
int		check_dup(t_data *list);
int		check_sort(t_data *list);
void	sa(t_data *list_a);
void	sb(t_data *list_b);
void	ss(t_data *list_a, t_data *list_b);
void	pa(t_data *list_a, t_data *list_b);
void	pb(t_data *list_a, t_data *list_b);

#endif
