# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jormond- <jormond-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/15 15:47:49 by jormond-          #+#    #+#              #
#    Updated: 2019/07/17 12:46:47 by jormond-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
SRC	= ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_join_free.c \
		ft_memalloc.c \
		ft_memchr.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strequ.c \
		ft_strlen.c \
		ft_strnew.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strstr.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_strlcat.c \
		ft_strdup.c \
		ft_atoi.c \
		ft_memccpy.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strncat.c \
		ft_memdel.c \
		ft_putnbr.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_putnbr_fd.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) -c $(SRC) -I *.h
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all