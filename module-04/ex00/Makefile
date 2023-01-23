NAME = poly

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = src/main.cpp src/Animal.cpp src/Dog.cpp src/Cat.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean, all, re
