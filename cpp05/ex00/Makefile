NAME = a.out
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = main.cpp Bureaucrat.cpp

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