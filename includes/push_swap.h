/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:03:57 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/12/24 22:02:50 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_data
{
	int				value;
	int				index;
	int				position;
	struct s_data	*next;
}				t_data;

t_data	push_swap(int argc, char **argv);
t_data	*create_list(int argc, char **argv);
int		fill_list(t_data *list, char *str);
int		validation_check(char **str);
int		check_dup(t_data *list);
int		check_sort(t_data *list);

void	sa(t_data **list_a);
void	sb(t_data **list_b);
void	ss(t_data **list_a, t_data **list_b);
void	pa(t_data **list_a, t_data **list_b);
void	pb(t_data **list_a, t_data **list_b);
void	ra(t_data **list_a);
void	rb(t_data **list_b);
void	rr(t_data **list_a, t_data **list_b);
void	rra(t_data **list_a);
void	rrb(t_data **list_b);
void	rrr(t_data **list_a, t_data **list_b);

void	sort(t_data **list, int argc);
int		search_min(t_data **list);
int		search_max(t_data **list);
void	get_position(t_data **list, int argc);
int		len_list(t_data *list);

void	print_content(t_data *begin);

#endif
