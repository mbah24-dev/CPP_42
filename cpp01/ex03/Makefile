# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/15 14:19:56 by mbah              #+#    #+#              #
#    Updated: 2026/01/15 14:39:28 by mbah             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I inc

SRC = src/main.cpp src/HumanA.cpp src/HumanB.cpp src/Weapon.cpp
HEADERS = inc/HumanA.hpp inc/HumanB.hpp inc/Weapon.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
