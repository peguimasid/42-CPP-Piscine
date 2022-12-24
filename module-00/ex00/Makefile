NAME = megaphone

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS = megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean, all, re
