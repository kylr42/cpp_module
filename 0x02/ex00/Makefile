CC = c++
CPPFLAGS = -Wall -Wextra -Werror -Wno-unused -std=c++98

NAME = a.out
SRCS = fixed.cpp \
       main.cpp

DEPS = fixed.hpp

all: $(NAME)

$(NAME): $(SRCS) $(DEPS)
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)
	@printf '\033[1;32m%-100.100s\n\033[0m' '${NAME} compile success!'

clean:
	@$(RM) $(NAME)
	@printf '\033[1;35mDelete ${NAME} success!\n\033[0m'

fclean: clean

re: fclean all
