# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timanish <timanish@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/18 18:51:33 by timanish          #+#    #+#              #
#    Updated: 2025/07/19 15:03:55 by timanish         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re