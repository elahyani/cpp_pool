# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 12:26:05 by elahyani          #+#    #+#              #
#    Updated: 2021/03/01 12:30:11 by elahyani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = magaphone

SRCS = megaphone.cpp

FALGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	@clang++ $(FLAGS) $(SRCS) -o $(NAME)
	@echo Done

clean:

fclean:	clean
		@rm -rf $(NAME)

re: fclean all