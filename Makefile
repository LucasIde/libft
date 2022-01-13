# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lide <lide@student.s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 19:01:47 by lide              #+#    #+#              #
#    Updated: 2022/01/13 20:09:18 by lide             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_calloc.c ft_isascii.c ft_itoa.c ft_memcpy.c ft_split.c \
			ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_tolower.c \
			ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c \
			ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c \
			ft_toupper.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c \
			ft_memset.c ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

NAME		= libft.a
CC			= gcc
FLAGS		= -Wall -Wextra -Werror
OBJS		= $(SRCS:.c=.o)
RM			= rm -f

%.o:%.c
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
