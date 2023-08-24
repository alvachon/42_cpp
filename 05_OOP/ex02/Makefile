NAME =		ex02

SRC =		main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp

OBJ =		$(SRC:.cpp=.o)

CC =		c++

FLAGS =		-Wall -Wextra -Werror

STAND =		-std=c++98

RM =		rm -rf

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(STAND) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:clean
			$(RM) $(NAME)

re:fclean all

leaks:
	leaks --atExit -- ./ex02

.PHONY: all clean re
