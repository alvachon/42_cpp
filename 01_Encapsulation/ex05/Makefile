NAME =		ex05

SRC =		main.cpp \
			Harl.cpp

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
	leaks --atExit -- ./ex05

.PHONY: all clean re