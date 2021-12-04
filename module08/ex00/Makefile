# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 01:14:24 by mleblanc          #+#    #+#              #
#    Updated: 2021/10/16 00:28:06 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	easyfind
CFLAGS		=	-Wall -Werror -Wextra -Wpedantic -Wconversion -Wshadow -std=c++98
CC			=	clang++
RM			=	rm -rf

OBJ			=	obj

INCS		=	easyfind.hpp
SRCS		=	main.cpp
OBJS		=	$(addprefix $(OBJ)/, $(SRCS:.cpp=.o))


$(OBJ)/%.o:	%.cpp
			$(CC) $(CFLAGS) -I. -c $< -o $@

all:		CFLAGS += -O2
all:		$(NAME)

debug:		CFLAGS += -g -fno-limit-debug-info
debug:		$(NAME)

$(NAME):	$(OBJ) $(OBJS)
			$(CC) $(OBJS) -o $(NAME)

$(OBJ):
			@mkdir -p $(OBJ)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

format:
			@clang-format -i $(SRCS) $(INCS)

.PHONY:		all clean fclean re format debug
