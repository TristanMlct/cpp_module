# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmilcent <tmilcent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 23:03:41 by tmilcent          #+#    #+#              #
#    Updated: 2023/09/25 23:39:40 by tmilcent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = @c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -f
NAME = phonebook

SRC_FILES =	Contact.cpp \
			main.cpp \
			PhoneBook.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC_FILES)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re