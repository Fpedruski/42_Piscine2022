#	Usage:
#	make		# compile all binary
#	make clean	# remove ALL binaries
#
#
#	Introduce libft.h && *.c
#	Set makefile as NAME, all, clean, fclean, re
#

NAME=libft.a

CC = gcc

SRCS = ft_isalpha.c ft_isdigit.c ft_isascii.c main.c

OBJECTS=ft_isalpha.o ft_isdigit.o ft_isascii.o main.o

INCLUDES=./

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	@gcc -Wall -Wextra -Werror -c $(SRCS) -o a.out
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@echo "Cleaning up..."
	rm *.o





