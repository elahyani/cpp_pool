# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 15:28:24 by elahyani          #+#    #+#              #
#    Updated: 2021/04/17 15:30:54 by elahyani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serial

FALGS = -Wall -Wextra -Werror

MAIN = main.cpp

all: $(NAME)

$(NAME): $(MAIN)
	@clang++ $(FLAGS) $(MAIN) -o $(NAME)
	@echo Done

clean:

fclean:	clean
		@rm -rf $(NAME)

re: fclean all