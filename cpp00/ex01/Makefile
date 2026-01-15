# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/09 14:35:09 by mbah              #+#    #+#              #
#    Updated: 2026/01/09 16:04:15 by mbah             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = phonebook

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRC_DIR     = src/
INC_DIR     = inc/
OBJ_DIR     = obj/

SRC_FILES   = main.cpp Contact.class.cpp PhoneBook.class.cpp
SRCS        = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS        = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

INCLUDES    = -I $(INC_DIR)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
