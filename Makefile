# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 14:51:18 by fdarkhaw          #+#    #+#              #
#    Updated: 2022/01/14 11:53:58 by fdarkhaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

INC_DIR		= ./includes/

SRCS		= 	./sources/main.c\
				./sources/create_steak.c\
				./sources/check_input.c\
				./sources/sorting_swap.c\
				./sources/sorting_push.c\
				./sources/sorting_rotation.c\
				./sources/sorting_revers_rotation.c\
				./sources/sorting.c\
				./sources/search.c\
				./sources/sort_big.c\
				./sources/fill_scr_and_last_rotate.c\
				
		
OBJ			= $(SRCS:.c=.o)
DEP			= $(SRCS:.c=.d)

CFLAGS		= -Wall -Werror -Wextra

.PHONY		: all clean fclean re

all			: $(NAME)

$(NAME)		: $(OBJ)
			gcc -o $(NAME) $(CFLAGS) -I$(INC_DIR) $(OBJ)

%.o : %.c
		gcc -c $(CFLAGS) -I$(INC_DIR) $< -o $@ -MD
		
clean:
		rm -f $(OBJ) $(DEP)
		
fclean: clean
		rm -f $(NAME)

re: fclean all

include $(wildcard $(DEP))
