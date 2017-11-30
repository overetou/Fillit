# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 17:05:18 by fchevrey          #+#    #+#              #
#    Updated: 2017/11/30 16:36:11 by fchevrey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIB = libft.a

SRC_LIB = libft/ft_bzero.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c \
	libft/ft_isdigit.c libft/ft_isprint.c libft/ft_itoa.c libft/ft_memalloc.c libft/ft_memccpy.c \
	libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memdel.c libft/ft_memmove.c \
	libft/ft_memset.c libft/ft_putchar.c libft/ft_putchar_fd.c libft/ft_putendl.c \
	libft/ft_putendl_fd.c libft/ft_putnbr.c libft/ft_putnbr_fd.c libft/ft_putstr.c \
	libft/ft_putstr_fd.c libft/ft_strcat.c libft/ft_strchr.c libft/ft_strclr.c \
	libft/ft_strcmp.c libft/ft_strcpy.c libft/ft_strdel.c libft/ft_strdup.c \
	libft/ft_strequ.c libft/ft_striter.c libft/ft_striteri.c libft/ft_strjoin.c \
	libft/ft_strlcat.c libft/ft_strlen.c libft/ft_strmap.c libft/ft_strmapi.c \
	libft/ft_strncat.c libft/ft_strncmp.c libft/ft_strncpy.c libft/ft_strnequ.c \
	libft/ft_strnew.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strsplit.c \
	libft/ft_strstr.c libft/ft_strsub.c libft/ft_strtrim.c libft/ft_tolower.c \
	libft/ft_toupper.c libft/ft_lstnew.c libft/ft_lstdelone.c libft/ft_lstdel.c \
	libft/ft_lstadd.c libft/ft_lstiter.c libft/ft_lstmap.c libft/ft_tests.c \
	libft/ft_lstprint.c libft/ft_tabprint.c libft/ft_lstpushback.c libft/ft_lstaddlink.c

SRC = src/main.c src/ft_check.c src/ft_filecpy.c src/ft_tetrinew.c src/ft_tetriadd.c \
	  src/ft_mapnew.c src/ft_mapdel.c src/ft_fill_list.c src/ft_tetriprint.c src/ft_movetetri.c

OBJECT_LIB = $(SRC_LIB:.c=.o)

OBJECT= $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): lib $(OBJECT)
	gcc -o $(NAME) $(CFLAGS) $(OBJECT) -L. -lft

lib: $(OBJECT_LIB)
	ar  rc $(LIB) $(OBJECT_LIB)
	ranlib $(LIB)
clean:
	rm -f $(OBJECT) $(OBJECT_LIB)

fclean: clean
	rm -f $(NAME) $(LIB)

re: fclean all
