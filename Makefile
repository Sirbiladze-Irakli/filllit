# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jormond- <jormond-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/17 12:43:39 by jormond-          #+#    #+#              #
#    Updated: 2019/07/17 15:20:34 by jormond-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fillit
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
OBJ		= main.o fillit.o
INC		= fillit.h
LIB		= ./libft/libft.a

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(LIB)

$(LIB):
	make -C ./libft re	

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) -c $< -I $(INC) -o $@ 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all