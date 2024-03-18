# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yerbs <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 15:32:26 by yerbs             #+#    #+#              #
#    Updated: 2024/03/15 15:33:40 by yerbs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/main.c

OBJS = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

NAME = push_swap.a

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
