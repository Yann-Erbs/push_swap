# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 19:34:49 by yerbs             #+#    #+#              #
#    Updated: 2024/03/19 07:41:46 by yerbs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_substr.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_tolower.c \
		ft_toupper.c \

OBJDIR =		.obj/

OBJS =			${SRCS:%.c=${OBJDIR}%.o}

# ==================== FLAGS ==================== #

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar rcs

# ==================== RULES ==================== #

NAME = libft.a

all: libft $(NAME)

libft:
	@printf "$(CYAN)"
	@echo " --- LIBFT ---\n"

${OBJDIR}%.o: %.c
	@mkdir -p ${@D}
	@printf "\r${GREEN}Compilation of $(CYAN)libft${RESET}..."
	@${CC} ${CFLAGS} -c $< -o $@

$(NAME):	${OBJS}
	@$(AR) $(NAME) $(OBJS) 
	@echo "\n$(CYAN)${NAME}$(RESET) $(GREEN)has been created $(RESET)✔️"

clean:
	@${RM} ${OBJDIR}
	@echo "$(RED)Deleting $(CYAN)libft $(YELLOW)objs$(RESET) ✔️"

fclean:	clean
	@${RM} ${NAME}
	@echo "$(RED)Deleting $(CYAN)$(NAME)$(RESET) ✔️"

re:		fclean all

.PHONY: all clean fclean re bonus

# ==================== COLOR ==================== #

RED 	:= \033[1;31m
GREEN 	:= \033[1;32m
YELLOW 	:= \033[1;33m
CYAN 	:= \033[1;36m
RESET 	:= \033[0m
