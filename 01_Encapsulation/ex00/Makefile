NAME =		ex00

SRC =		main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp

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

.PHONY: all clean re
