# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmaisonn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/21 10:41:26 by rmaisonn          #+#    #+#              #
#    Updated: 2017/07/24 15:51:08 by rmaisonn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = conditions.c doop.c fct.c ope.c

all: compile

compile:
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all
