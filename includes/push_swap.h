/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:03:57 by fdarkhaw          #+#    #+#             */
/*   Updated: 2022/01/14 14:00:00 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_data
{
	int				value;
	int				index;
	int				score;
	struct s_data	*next;
}				t_data;

t_data	*create_list(int argc, char **argv);
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

void	sorting(t_data **list, int argc);
void	get_index(t_data **list, int argc);
int		len_list(t_data *list);
int		search_med(t_data **list, int val);
int		closest_ind_a(t_data **list_a, int ind_b);
int		closest_scr_a(t_data **list_a, int ind);
int		ind_min_scr_b(t_data *list_b);
void	sort_100500(t_data **list_a, int argc);
void	fill_score(t_data *list);
void	fill_scr_plus(t_data **list_a, t_data *list_b);
void	rotate_ra(t_data **list_a, int r_a);
void	rotate_rb(t_data **list_b, int r_b);
void	rotate_rr(t_data **list_a, t_data **list_b, int r_a, int r_b);

#endif
