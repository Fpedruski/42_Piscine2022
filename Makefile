#	Usage:
#	make		# compile all binary
#	make clean	# remove ALL binaries
#
#
#	Introduce libft.h && *.c
#	Set makefile as NAME, all, clean, fclean, re
#

CC = gcc

all: 
	${CC} -Wall -Wextra -Werror *.c

generate:
	@echo "Creating empty text files..."

clean:
	@echo "Cleaning up..."
	rm *.out

