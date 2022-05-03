# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maxim <maxim@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 15:04:41 by maxim             #+#    #+#              #
#    Updated: 2022/05/03 15:20:14 by maxim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC=main.cpp Zombie.cpp zombieHorde.cpp
OBJ=$(SRC:.cpp=.o)
INCLUDES=Zombie.hpp

NAME=tests

CXX=clang++
CXXFLAGS=-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $@

%.o: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean fclean all re