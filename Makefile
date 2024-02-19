SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB_NAME = libft.a

OBJECTS = $(SOURCES:.c=.o)

all: libft.a

libft.a : $(OBJECTS)
	@ar rcs $(LIB_NAME) $(OBJECTS)

$(OBJECTS) : %.o : %.c
	@$(CC) -c $(FLAGS) $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -rf $(LIB_NAME)

lib : all clean

re : fclean all
