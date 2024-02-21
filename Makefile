# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: franaivo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 10:07:39 by franaivo          #+#    #+#              #
#    Updated: 2024/02/21 10:07:39 by franaivo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
					ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c 

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

$(OBJECTS) : %.o : %.c
	@$(CC) -c $(FLAGS) $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -rf $(NAME)

lib : all clean

re : fclean all
