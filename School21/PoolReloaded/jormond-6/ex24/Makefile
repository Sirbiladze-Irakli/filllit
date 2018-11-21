name = libft.a

src =	./srcs/ft_putchar.c \
		./srcs/ft_swap.c \
		./srcs/ft_strlen.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c

inc =	./includes/

all: $(name)

$(name):
	gcc -c $(src) -I $(inc)
	ar rc $(name) *.o

clean:
	rm -Rf *.o

fclean: clean
	rm -Rf $(name)

re: fclean all
