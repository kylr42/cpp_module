CC = c++

OS_NAME	= $(shell uname -s | tr A-Z a-z)
ifeq	($(OS_NAME), linux)
	CPPFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -Wno-unused -std=c++98 -MMD
else
	CPPFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -MMD
endif

NAME =	a.out
SRCS =  main.cpp \
        Intern.cpp \
        AForm.cpp \
        Bureaucrat.cpp \
        PresidentialPardonForm.cpp \
        RobotomyRequestForm.cpp \
        ShrubberyCreationForm.cpp
DIR  =	objects/

OBJS = $(addprefix $(DIR), $(SRCS:.cpp=.o))
DEPS = $(patsubst %.o,%.d,$(OBJS))

all: $(NAME)

$(DIR):
	@mkdir -p $(DIR)

$(DIR)%.o: ./%.cpp
	@$(CC) $(CPPFLAGS) -c $< -o $@
	@printf "\033[0;34mObject %-40.100s [\033[0;32m✔\033[0;34m]\r" $@

$(NAME): $(DIR) $(OBJS) $(SRCS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@printf '\033[1;32m%-100.100s\n\033[0m' '${NAME} compile success!'

clean:
	@$(RM) $(OBJS) $(DEPS)
	@rm -rf $(DIR)
	@printf '\033[1;35mDelete objects success!\n\033[0m'

fclean: clean
	@$(RM) $(NAME)
	@printf '\033[1;35mDelete ${NAME} success!\n\033[0m'

-include $(DEPS)

re: fclean all