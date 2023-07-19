NAME =		ex03

SRC =		HumanA.cpp \
			HumanB.cpp \
			main.cpp \
			Weapon.cpp

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