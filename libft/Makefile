# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 18:42:30 by fdarkhaw          #+#    #+#              #
#    Updated: 2021/11/17 12:03:32 by fdarkhaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

LIST		=		ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
					ft_isascii.c	ft_isprint.c	ft_strlen.c\
					ft_memset.c		ft_bzero.c		ft_memcpy.c\
					ft_memmove.c	ft_strlcpy.c	ft_strlcat.c\
					ft_toupper.c	ft_tolower.c	ft_strchr.c\
					ft_strrchr.c	ft_strncmp.c	ft_memchr.c\
					ft_memcmp.c		ft_strnstr.c	ft_atoi.c\
					ft_calloc.c		ft_strdup.c		ft_substr.c\
					ft_strjoin.c	ft_strtrim.c	ft_split.c\
					ft_itoa.c		ft_strmapi.c	ft_striteri.c\
					ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c\
					ft_putnbr_fd.c

LIST_B		=		ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c\
					ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
					ft_lstclear.c	ft_lstiter.c		ft_lstmap.c

HEADER		= libft.h

OBJ			= ${patsubst %.c,%.o,$(LIST)}

OBJ_B		= ${patsubst %.c,%.o,$(LIST_B)}

CC			= gcc
FLAGS		= -Wall -Wextra -Werror -I $(HEADER)

.PHONY		: all clean fclean re bonus

all			: $(NAME)

$(NAME)		: $(OBJ) $(HEADER)
				ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus	:
	make OBJ="$(OBJ_B)" all

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean:		clean
	rm -f $(NAME)

re:			fclean all
