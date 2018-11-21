# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jormond- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 18:41:17 by jormond-          #+#    #+#              #
#    Updated: 2018/11/21 19:04:48 by jormond-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = ft_display_file

src = ft_putstr.c \
	  ft_putchar.c \
	  main.c
head = ./header/

all:
	gcc -Wextra -Wall -Werror -o $(name) $(src) -I $(head)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(name)
