# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 01:14:24 by mleblanc          #+#    #+#              #
#    Updated: 2021/09/10 18:29:06 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	clap
CFLAGS		=	-Wall -Werror -Wextra -Wpedantic -Wconversion -Wshadow -std=c++98
CC			=	clang++
RM			=	rm -rf

INC			=	include
SRC			=	src
OBJ			=	obj

HFILES		=	ClapTrap.hpp
CFILES		=	main.cpp ClapTrap.cpp
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
