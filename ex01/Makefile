NAME = phonebook
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = PhoneBook.cpp Contact.cpp main.cpp
OBJS = ${SRCS:%.cpp=%.o}

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
