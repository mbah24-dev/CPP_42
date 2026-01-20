# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/20 00:31:30 by mbah              #+#    #+#              #
#    Updated: 2026/01/20 02:03:54 by mbah             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = -I inc

HEADER = \
		inc/AAnimal.hpp \
		inc/Dog.hpp \
		inc/Cat.hpp \
		inc/Brain.hpp

SRC = \
	src/main.cpp \
	src/AAnimal.cpp \
	src/Dog.cpp \
	src/Cat.cpp \
	src/Brain.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
