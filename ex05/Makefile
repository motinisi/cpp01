# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timanish <timanish@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/19 13:51:20 by timanish          #+#    #+#              #
#    Updated: 2025/07/19 15:07:24 by timanish         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex05
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re