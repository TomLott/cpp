NAME = megaphone

FLAGS = -Wall -Werror -Wextra

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)

.cpp.o:
			clang++ $(FLAGS) -c $< -o $@

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re:		fclean all

