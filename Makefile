# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvigny <johanne.vgn@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 16:13:05 by jvigny            #+#    #+#              #
#    Updated: 2022/10/14 16:13:05 by jvigny           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c
		/ ft_isdigit.c
		/ft_isalnum.c
		/ ft_isascii.c
		/ ft_isprint.c
		/ ft_strlen.c
		/ ft_memset.c
		/ ft_bzero.c
		/ ft_memcpy.c
		/ ft_memmove.c
		/ ft_strlcpy.c
		/ ft_strlcat.c
		/ ft_toupper.c
		/ ft_tolower.c
		/ ft_strchr.c
		/ ft_strrchr.c
		/ ft_strncmp.c
		/ ft_memchr.c
		/ ft_memcmp.c
		/ ft_strnstr.c
		/ ft_atoi.c
		/ ft_calloc.c
		/ ft_strdup.c
		/ ft_substr.c
		/ ft_strjoin.c
		/ ft_strtrim.c
		/ ft_split.c
		/ ft_itoa.c
		/ ft_strmapi.c
		/ ft_striteri.c
		/ ft_putchar_fd.c
		/ ft_putstr_fd.c
		/ ft_putendl_fd.c
		/ ft_putnbr_fd.c

OBJ = ${SRCS: .c = .o}
HEADER = libft.h
NAME = libft.a
FLAGS = -Wall -Werror -Wextra -I${HEADER}
CC = cc

all:	${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

%.o:	%.c
	${CC} ${FLAGS} -c -o $@ $<

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all re clean fclean 

