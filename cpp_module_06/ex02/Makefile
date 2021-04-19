# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/18 15:55:02 by elahyani          #+#    #+#              #
#    Updated: 2021/04/19 13:51:50 by elahyani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identfier

FLAGS = -Wall -Wextra -Werror

MAIN = main.cpp

all: $(NAME)

$(NAME): $(MAIN)
	@clang++ $(FLAGS) $(MAIN) -o $(NAME)
	@echo Done

clean:

fclean:	clean
		@rm -rf $(NAME)

re: fclean all