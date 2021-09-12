# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 01:14:24 by mleblanc          #+#    #+#              #
#    Updated: 2021/09/12 07:01:31 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
CFLAGS		=	-Wall -Werror -Wextra -Wpedantic -Wconversion -Wshadow -std=c++98 -g -fno-limit-debug-info
CC			=	clang++
RM			=	rm -rf

INC			=	include
SRC			=	src
OBJ			=	obj

HFILES		=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp\
				IMateriaSource.hpp MateriaSource.hpp
CFILES		=	main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
OFILES		=	$(CFILES:.cpp=.o)
INCS		=	$(addprefix $(INC)/, $(HFILES))
SRCS		=	$(addprefix $(SRC)/, $(CFILES))
OBJS		=	$(addprefix $(OBJ)/, $(OFILES))

VPATH		=	$(SRC)

$(OBJ)/%.o:	%.cpp
			$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

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
