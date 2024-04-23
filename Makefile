# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjavary <sjavary@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 08:57:26 by sfroidev          #+#    #+#              #
#    Updated: 2023/12/04 09:34:39 by sjavary          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRC = $(wildcard srcs/*.c)
OBJ = $(SRC:.c=.o)

CC = gcc
LFLAGS = -lreadline
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) ./libft/*.c $(OBJ) $(LFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ) *~ core *.core

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

