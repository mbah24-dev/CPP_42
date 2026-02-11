# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 16:33:03 by mbah              #+#    #+#              #
#    Updated: 2025/11/17 15:10:50 by mbah             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = megaphone
CC      = c++
C_FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	rm -f *.o
fclean : clean
	rm -f $(NAME)
re: fclean all

.PHONY: all re clean fclean
