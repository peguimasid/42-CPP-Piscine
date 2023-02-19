NAME = arr

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Array.tpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean, all, re
