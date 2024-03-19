# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 15:32:26 by yerbs             #+#    #+#              #
#    Updated: 2024/03/19 14:44:24 by yerbs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =   srcs/main.c \
		utils/ft_error.c \
		utils/ft_check_args.c \
		utils/t_stack.c \
		utils/ft_is_sorted.c \
		
OBJDIR = .obj/

OBJS = ${SRC:%.c=${OBJDIR}%.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra 
RM = rm -rf

NAME = push_swap

all: ps ${NAME}

ps:
	@printf "${PINK} --- PUSH_SWAP ---\n"


${OBJDIR}%.o: %.c
	@mkdir -p ${@D}
	@printf "\r${GREEN}Compilation of $(CYAN)push_swap${RESET}..."
	@${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	@echo "\n$(CYAN)${NAME}$(RESET) $(GREEN)has been created $(RESET)✔️\n"
	@make --no-print-directory -C ./libft
	@mv ./libft/libft.a .
	@${CC} ${CFLAGS} ${OBJS} libft.a -o push_swap

clean:
	@make --no-print-directory clean -C ./libft
	@${RM} ${OBJDIR}


fclean: clean
	@${RM} libft.a
	@${RM} ${NAME} 
	@${RM} a.out

re: fclean all

.PHONY: all clean fclean re

# ==================== COLOR ==================== #

RED 	:= \033[1;31m
GREEN 	:= \033[1;32m
PINK 	:= \033[4;35m
CYAN 	:= \033[1;36m
RESET 	:= \033[0m
