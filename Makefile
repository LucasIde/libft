# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lide <lide@student.s19.be>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 19:01:47 by lide              #+#    #+#              #
#    Updated: 2022/01/18 14:55:37 by lide             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_calloc.c\
				ft_isascii.c\
				ft_itoa.c\
				ft_memcpy.c\
				ft_split.c\
				ft_striteri.c\
				ft_strlcpy.c\
				ft_strncmp.c\
				ft_strtrim.c\
				ft_tolower.c\
				ft_atoi.c\
				ft_isalnum.c\
				ft_isdigit.c\
				ft_memchr.c\
				ft_memmove.c\
				ft_strchr.c\
				ft_strjoin.c\
				ft_strlen.c\
				ft_strnstr.c\
				ft_substr.c\
				ft_toupper.c\
				ft_bzero.c\
				ft_isalpha.c\
				ft_isprint.c\
				ft_memcmp.c \
				ft_memset.c\
				ft_strdup.c\
				ft_strlcat.c\
				ft_strmapi.c\
				ft_strrchr.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c

BONUS_SRCS	=	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c

NAME		= libft.a
CC			= gcc
FLAGS		= -Wall -Wextra -Werror
OBJS		= ${SRCS:.c=.o}
BONUS_OBJS		= ${BONUS_SRCS:.c=.o}
LIBC		= ar -rc
RM			= rm -f

%.o:%.c
			${CC} ${FLAGS} -c $< -o $@

${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}

all:		${NAME}

bonus:		${BONUS_OBJS}
			${LIBC} ${NAME} ${BONUS_OBJS}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
