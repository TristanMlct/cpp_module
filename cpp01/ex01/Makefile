# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 15:22:54 by tmilcent          #+#    #+#              #
#    Updated: 2023/09/27 16:00:04 by tmilcent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = @c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM = @rm -f
NAME = 42zombie

SRC_FILES =	Zombie.cpp \
			zombieHorde.cpp \
			main.cpp
	
all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC_FILES)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re