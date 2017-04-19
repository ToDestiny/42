# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolas <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/19 16:12:07 by acolas            #+#    #+#              #
#    Updated: 2017/04/19 18:17:03 by acolas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c 

all: $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Werror -Wextra $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re:	fclean	all
