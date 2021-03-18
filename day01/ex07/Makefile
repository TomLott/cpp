NAME = new_sed


SRCS = Sed.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
				clang++ $(FLAGS) -I. -o $(NAME) $(OBJS)

.c.o:
				clang++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:     fclean all