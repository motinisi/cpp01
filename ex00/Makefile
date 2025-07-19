# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timanish <timanish@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 17:02:03 by nisi              #+#    #+#              #
#    Updated: 2025/07/19 15:06:54 by timanish         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp
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