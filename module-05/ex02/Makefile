NAME = form

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp \
			 src/Bureaucrat.cpp \
			 src/Form.cpp \
			 src/PresidentialPardonForm.cpp \
			 src/RobotomyRequestForm.cpp \
			 src/ShrubberyCreationForm.cpp \

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean, all, re
