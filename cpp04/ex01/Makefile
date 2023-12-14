NAME = a.out
CC = clang++
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -fsanitize=address -g
RM = rm -rf

SRCS = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp

all: $(NAME)

$(NAME): $(SRCS)
		 $(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
		 @echo Removing object files...
		 @$(RM) *.o

fclean: clean
		@echo Removing program file...
		@$(RM) $(NAME)

re: fclean all