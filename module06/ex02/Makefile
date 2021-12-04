# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 01:14:24 by mleblanc          #+#    #+#              #
#    Updated: 2021/10/15 03:27:11 by mleblanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	identify
CFLAGS		=	-Wall -Werror -Wextra -Wpedantic -Wconversion -Wshadow -std=c++98
CC			=	clang++
RM			=	rm -rf

OBJ			=	obj

INCS		=	Base.hpp A.hpp B.hpp C.hpp
SRCS		=	main.cpp Base.cpp A.cpp B.cpp C.cpp
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
