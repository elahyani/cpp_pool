# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 15:24:02 by elahyani          #+#    #+#              #
#    Updated: 2021/04/17 15:25:03 by elahyani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = converter

SRCS = converter.cpp

FALGS = -Wall -Wextra -Werror

MAIN = main.cpp

all: $(NAME)

$(NAME): $(MAIN) $(SRCS)
	@clang++ $(FLAGS) $(SRCS) $(MAIN) -o $(NAME)
	@echo Done

clean:

fclean:	clean
		@rm -rf $(NAME)

re: fclean all