# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 15:32:26 by yerbs             #+#    #+#              #
#    Updated: 2024/03/19 10:21:16 by yerbs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =   srcs/main.c \
		utils/ft_error.c \
		utils/ft_check_args.c \
		utils/t_stack.c \
		utils/ft_is_sorted.c \
		


OBJS = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

NAME = push_swap

all: ${NAME}

${NAME}: ${OBJS}
	make -C ./libft
	mv ./libft/libft.a .
	${CC} ${CFLAGS} ${OBJS} libft.a -o push_swap

clean:
	make clean -C ./libft
	${RM} ${OBJS}

fclean: clean
	${RM} libft.a
	${RM} ${NAME} 
	${RM} a.out

re: fclean all

.PHONY: all clean fclean re


