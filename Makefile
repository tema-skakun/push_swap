# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jg <jg@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 14:51:18 by fdarkhaw          #+#    #+#              #
#    Updated: 2021/12/23 16:02:20 by jg               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

INC_DIR		= ./includes/
LIBFT_DIR	= ./libft/

SRCS		= 	./sources/main.c\
				./sources/create_steak.c\
				./sources/check_input.c\
				./sources/sorting_swap.c\
				./sources/sorting_push.c\
				./sources/sorting_rotation.c\
				./sources/sorting_revers_rotation.c\
				./sources/sorting.c\
				./sources/search.c\
				
		
OBJ			= $(SRCS:.c=.o)
DEP			= $(SRCS:.c=.d)

CFLAGS		= -Wall -Werror -Wextra

.PHONY		: all clean fclean re

all			: $(NAME)

$(NAME)		: $(OBJ)
			@make -C $(LIBFT_DIR)
			gcc -o $(NAME) $(CFLAGS) -I$(INC_DIR) $(OBJ) $(LIBFT_DIR)libft.a

%.o : %.c
		gcc -c $(CFLAGS) -I$(INC_DIR) $< -o $@ -MD
		
clean:
		@make clean -C $(LIBFT_DIR)
		rm -f $(OBJ) $(DEP)
		
fclean: clean
		@make fclean -C $(LIBFT_DIR)
		rm -f $(NAME)

re: fclean all

include $(wildcard $(DEP))
