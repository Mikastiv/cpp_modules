# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 01:14:24 by mleblanc          #+#    #+#              #
#    Updated: 2021/09/11 22:24:14 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	animals
CFLAGS		=	-Wall -Werror -Wextra -Wpedantic -Wconversion -Wshadow -std=c++98
CC			=	clang++
RM			=	rm -rf

OBJ			=	obj

INCS		=	Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
SRCS		=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
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
