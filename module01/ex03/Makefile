# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 01:14:24 by mleblanc          #+#    #+#              #
#    Updated: 2021/12/03 21:01:09 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fight
CFLAGS		=	-Wall -Werror -Wextra -Wpedantic -Wconversion -std=c++98
CC			=	clang++
RM			=	rm -rf

INC			=	include
SRC			=	src
OBJ			=	obj

INCS		=	Weapon.hpp HumanA.hpp HumanB.hpp
SRCS		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS		=	$(addprefix $(OBJ)/, $(SRCS:.cpp=.o))

$(OBJ)/%.o:	%.cpp
			$(CC) $(CFLAGS) -I. -c $< -o $@

$(NAME):	$(OBJ) $(OBJS)
			$(CC) $(OBJS) -o $(NAME)

$(OBJ):
			@mkdir -p $(OBJ)

all:		$(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

format:
			@clang-format -i $(SRCS) $(INCS)

.PHONY:		all clean fclean re format
