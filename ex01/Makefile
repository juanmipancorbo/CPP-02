# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 22:54:57 by jpancorb          #+#    #+#              #
#    Updated: 2025/04/17 00:32:34 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= towards_a_more_useful_fixed_point_number_class
SRCS	= main.cpp Fixed.cpp
DEP		= Fixed.hpp
CFLAGS	= -Wall -Wextra -Werror -std=c++98 

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CFLAGS) -o $@ $^

%.o: %.cpp $(DEP)
		c++ $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re