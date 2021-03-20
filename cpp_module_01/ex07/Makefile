# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 15:50:54 by elahyani          #+#    #+#              #
#    Updated: 2021/03/20 14:34:45 by elahyani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = replace

SRCS = replace.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(SRCS)
	@clang++ $(FLAGS) $(SRCS) -o replace
	@echo Done

clean:

fclean:	clean
		@rm $(NAME)

re: fclean all