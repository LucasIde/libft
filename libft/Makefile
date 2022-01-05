# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lide <lide@student.s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 19:01:47 by lide              #+#    #+#              #
#    Updated: 2022/01/05 14:02:36 by lide             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
FLAGS		= -Wall -Wextra -Werror
SRCS		= *.c
OBJ			= $(SRCS:.c=.o)
RM			= rm -f
.c.o:
			${CC} ${FLAGS} -c $< -o $@
${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}
			ranlib ${NAME}
all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
