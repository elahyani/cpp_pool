# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/27 16:53:05 by elahyani          #+#    #+#              #
#    Updated: 2021/02/28 11:58:04 by elahyani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = Phonebook.class.cpp myContact.class.cpp

MAIN = main.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(MAIN) $(SRCS)
			@clang++ $(FLAGS) $(MAIN) $(SRCS) -o phonebook
			@echo Done

clean:
			@rm -f *.o

fclean:		clean
			@rm -f $(NAME)
			@rm -f phonebook
re: fclean all