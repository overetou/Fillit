# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 17:05:18 by fchevrey          #+#    #+#              #
#    Updated: 2017/12/03 15:47:12 by fchevrey         ###   ########.fr        #
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
	libft/ft_lstprint.c libft/ft_tabprint.c libft/ft_lstpushback.c libft/ft_lstaddlink.c \
	libft/ft_atoi.c

SRC = src/main.c src/ft_check.c src/ft_filecpy.c src/ft_tetrinew.c src/ft_tetriadd.c \
	  src/ft_mapnew.c src/ft_mapdel.c src/ft_fill_list.c src/ft_tetriprint.c \
	  src/ft_movetetri.c src/ft_tetridelone.c src/ft_tetridel.c \
	  src/ft_tetriter.c src/ft_place_all.c src/ft_try_place.c src/ft_mapcpy.c \
	  src/ft_pt_op.c

OBJECT_LIB = ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
	ft_isdigit.o ft_isprint.o ft_itoa.o ft_memalloc.o ft_memccpy.o \
	ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o \
	ft_memset.o ft_putchar.o ft_putchar_fd.o ft_putendl.o \
	ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o \
	ft_putstr_fd.o ft_strcat.o ft_strchr.o ft_strclr.o \
	ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o \
	ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o \
	ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o \
	ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnequ.o \
	ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o \
	ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o \
	ft_toupper.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o \
	ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_tests.o \
	ft_lstprint.o ft_tabprint.o ft_lstpushback.o ft_lstaddlink.o \
	ft_atoi.o

OBJECT= $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): $(LIB) $(OBJECT)
	gcc -o $(NAME) $(CFLAGS) $(OBJECT) -L. -lft

$(LIB):
	gcc -Werror -Wextra -Wall -c $(SRC_LIB) -I ./libft
	ar rc $(LIB) $(OBJECT_LIB)
	ranlib $(LIB)

clean:
	rm -f $(OBJECT) $(OBJECT_LIB)

fclean: clean
	rm -f $(NAME) $(LIB)

re: fclean all
