# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 01:14:24 by mleblanc          #+#    #+#              #
#    Updated: 2021/10/01 13:56:51 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bureaucrat
CFLAGS		=	-Wall -Werror -Wextra -Wpedantic -Wconversion -Wshadow -std=c++98
CC			=	clang++
RM			=	rm -rf

OBJ			=	obj

INCS		=	Bureaucrat.hpp Form.hpp
SRCS		=	main.cpp Bureaucrat.cpp Form.cpp
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
