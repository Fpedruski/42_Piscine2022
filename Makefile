NAME=libft.a

CC = gcc

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
	   ft_isascii.c ft_strlen.c ft_toupper.c ft_strrchr.c \
	   ft_strchr.c ft_tolower.c ft_memset.c ft_bzero.c

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	@gcc -Wall -Wextra -Werror -c $(SRCS)
	@ar -rsc $@ $^

clean:
	@echo "Cleaning up..."
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
