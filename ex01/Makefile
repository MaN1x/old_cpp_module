SRC=Contact.cpp main.cpp PhoneBook.cpp
OBJ=$(SRC:.cpp=.o)

NAME=PhoneBook

CXX=clang++
CXXFLAGS=-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $@

.o:
	$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean fclean all re
