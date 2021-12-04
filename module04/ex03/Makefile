# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 01:14:24 by mleblanc          #+#    #+#              #
#    Updated: 2021/11/03 15:46:52 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	materia
CFLAGS		=	-Wall -Werror -Wextra -Wpedantic -Wconversion -Wshadow -std=c++98 -g -fno-limit-debug-info
CC			=	clang++
RM			=	rm -rf

OBJ			=	obj

INCS		=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp\
				IMateriaSource.hpp MateriaSource.hpp
SRCS		=	main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
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
