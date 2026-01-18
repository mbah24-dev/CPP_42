# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/18 23:32:34 by mbah              #+#    #+#              #
#    Updated: 2026/01/19 00:21:25 by mbah             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = trap

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I inc

HEADER = inc/ClapTrap.hpp inc/ScavTrap.hpp inc/FragTrap.hpp

SRCS = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
