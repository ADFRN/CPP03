# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afournie <afournie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/05 15:08:41 by afournie          #+#    #+#              #
#    Updated: 2026/06/05 15:09:05 by afournie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= main.cpp ClapTrap.cpp
OBJ			= $(SRC:.cpp=.o)

CC			= c++ -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

NAME		= ClapTrap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
