# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 21:17:43 by jpancorb          #+#    #+#              #
#    Updated: 2025/04/15 21:21:44 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= my_first_class_in_orthodox_canonical_form
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