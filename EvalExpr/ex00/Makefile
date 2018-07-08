# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 13:47:13 by wchan             #+#    #+#              #
#    Updated: 2018/07/07 13:47:19 by wchan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Compiler Name and Options
CC = gcc
CFLAGS = -Wall -Wextra -Werror -o

#Filenames
NAME = eval_expr
SRCS = ft_auxilary.c eval_expr.c
OBJS = $(FILENAMES:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(NAME) $(addprefix srcs/, $(SRCS))

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
