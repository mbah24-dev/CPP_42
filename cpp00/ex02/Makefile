# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/15 02:54:31 by mbah              #+#    #+#              #
#    Updated: 2026/01/15 02:54:36 by mbah             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= test-GBU

CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98

SRC		= Account.cpp tests.cpp
HEADERS	= Account.hpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJ) -o $@ -I .

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
