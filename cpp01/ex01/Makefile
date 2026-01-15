# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/15 03:58:13 by mbah              #+#    #+#              #
#    Updated: 2026/01/15 04:53:24 by mbah             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie_horde

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I inc

SRC = src/main.cpp src/Zombie.cpp src/zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
