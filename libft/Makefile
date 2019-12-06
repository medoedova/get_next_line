# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 06:01:15 by vrhaena           #+#    #+#              #
#    Updated: 2019/10/06 22:41:22 by vrhaena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_isalnum.c ft_isascii.c ft_bzero.c ft_isalpha.c ft_isprint.c \
	ft_memmove.c ft_isdigit.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_strcmp.c \
	ft_strcat.c ft_strlen.c ft_strcpy.c ft_strdup.c ft_strncat.c ft_strncmp.c \
	ft_strncpy.c ft_tolower.c ft_toupper.c ft_memcmp.c ft_memchr.c ft_strchr.c \
	ft_strrchr.c ft_striter.c ft_striteri.c ft_putchar.c ft_putchar_fd.c \
	ft_putnbr.c ft_putstr_fd.c ft_strsplit.c ft_putnbr_fd.c ft_putendl_fd.c \
	ft_putendl.c ft_memalloc.c ft_strmap.c ft_strmapi.c ft_memdel.c ft_itoa.c \
	ft_strnew.c ft_strdel.c ft_strclr.c ft_strequ.c ft_strnequ.c ft_strjoin.c \
	ft_strsub.c ft_strlcat.c ft_strstr.c ft_strnstr.c ft_strtrim.c ft_power.c \
	ft_putstr.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_islower.c ft_abs.c \
	ft_isupper.c ft_strrev.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

INCLUDES = libft.h
BINS = ft_atoi.o ft_isalnum.o ft_isascii.o ft_bzero.o ft_isalpha.o \
	ft_isprint.o ft_memmove.o ft_isdigit.o ft_memset.o ft_memcpy.o \
	ft_memccpy.o ft_strcmp.o ft_strcat.o ft_strlen.o ft_strcpy.o ft_strdup.o \
	ft_strncat.o ft_strncmp.o ft_strncpy.o ft_tolower.o ft_toupper.o \
	ft_memcmp.o ft_memchr.o ft_strchr.o ft_strrchr.o ft_striter.o ft_abs.o \
	ft_striteri.o ft_putchar.o ft_putstr_fd.o ft_putnbr_fd.o ft_putchar_fd.o \
	ft_putendl_fd.o ft_putstr.o ft_putnbr.o ft_putendl.o ft_memalloc.o \
	ft_strmap.o ft_strmapi.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o \
	ft_strequ.o ft_strnequ.o ft_strjoin.o ft_itoa.o ft_strsub.o ft_strlcat.o \
	ft_strstr.o ft_strnstr.o ft_strtrim.o ft_strsplit.o ft_lstnew.o \
	ft_lstdelone.o ft_lstdel.o ft_islower.o ft_isupper.o ft_strrev.o \
	ft_power.o ft_lstadd.o ft_lstiter.o ft_lstmap.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o:	%.c
	gcc -c $(FLAGS) $< -o $@

$(NAME):
	gcc -c $(FLAGS) $(SRC) -I $(INCLUDES)
	ar rc $(NAME) $(BINS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
