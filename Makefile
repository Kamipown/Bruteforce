#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdelobbe <pdelobbe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/25 02:10:24 by pdelobbe          #+#    #+#              #
#    Updated: 2015/04/25 03:28:17 by pdelobbe         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bruteforce

FLG = -Wall -Wextra -Werror

SRC = main.c ft_ft.c

all: $(NAME)

$(NAME):
	gcc -O3 $(FLG) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all