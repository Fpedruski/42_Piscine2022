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

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_strlen.c ft_toupper.c ft_strrchr.c ft_strchr.c ft_tolower.c main.c 

OBJECTS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isprint.o ft_isascii.o ft_strlen.o ft_toupper.o ft_strrchr.o ft_strchr.o ft_tolower.o

INCLUDES=./

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	@gcc -Wall -Wextra -Werror $(SRCS) 
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@echo "Cleaning up..."
	rm $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
