# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maxim <maxim@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 14:56:08 by maxim             #+#    #+#              #
#    Updated: 2022/05/03 14:56:08 by maxim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=megaphone.cpp
OBJ=$(SRC:.cpp=.o)

NAME=megaphone

CXX=clang++
CXXFLAGS=-Wall -Werror -Wextra -std=c++98

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
