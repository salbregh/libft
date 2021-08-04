# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: salbregh <salbregh@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/08/03 18:43:08 by salbregh      #+#    #+#                  #
#    Updated: 2021/08/04 22:59:14 by salbregh      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SHELL := /bin/bash
PINK = \x1b[35;01m
BLUE = \x1b[34;01m
YELLOW = \x1b[33;01m
GREEN = \x1b[32;01m
RED = \x1b[31;01m
WHITE = \x1b[31;37m
RESET = \x1b[0m

FILES	=	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_split.c \
			ft_strstr.c

SRCS	=	${addprefix srcs/, ${FILES}}

CC		=	GCC

INCL	=	-I include

OBJ		=	${SRCS:.c=.o}

CFLAGS	=	-Wall -Werror -Wextra

all:		${NAME}

${NAME}:	${OBJ}
			@echo -e "${YELLOW} /**      / ******/ *******  /********/********"
			@echo "| **      |_  **_/| **__  **| **_____/|__  **__/"
			@echo "| **        | **  | **  \ **| **         | **   "
			@echo "| **        | **  | ******* | *****      | **   "
			@echo "| **        | **  | **__  **| **__/      | **   "
			@echo "| **        | **  | **  \ **| **         | **   "
			@echo "| ******** /******| *******/| **         | **   "
			@echo "|________/|______/|_______/ |__/         |__/   "
			@ar rc ${NAME} ${OBJ}
			@ranlib ${NAME}

# "%.o: %.c" means that any file ending in .o depends 
# on the same filename ending in .c to be present.
%.o: %.c
			@$(CC) -c $^ -o $@ ${CFLAGS} ${INCL}

clean:
			@/bin/rm -f ${OBJ}

fclean:		clean
			@/bin/rm -f ${NAME}

re: 		fclean all