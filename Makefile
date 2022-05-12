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

SRCS = *.c

OBJECTS= *.o

INCLUDES=./

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	@gcc -Wall -Wextra -Werror $(SRCS) 
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@echo "Cleaning up..."
	rm *.o





