# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afournie <afournie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/05 15:08:41 by afournie          #+#    #+#              #
#    Updated: 2026/06/18 15:18:08 by afournie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp
INC			= ClapTrap.hpp ScavTrap.hpp
OBJ			= $(SRC:.cpp=.o)

CXX			= c++
CXXFLAGS	= -std=c++98 -Wall -Wextra -Werror
RM			= rm -rf

NAME		= ex01

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
