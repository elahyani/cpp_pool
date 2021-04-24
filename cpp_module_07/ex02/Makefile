# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/24 13:15:59 by elahyani          #+#    #+#              #
#    Updated: 2021/04/24 13:16:05 by elahyani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

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