# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 22:49:38 by tmilcent          #+#    #+#              #
#    Updated: 2023/09/25 22:55:29 by tmilcent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = @c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -f
NAME = megaphone

SRC_FILES =	megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC_FILES)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re