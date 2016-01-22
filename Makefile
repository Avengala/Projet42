NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf


SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
	ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c \
	ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_map.c \
	ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c \
	ft_putendl.c ft_putnbr.c ft_putchar_fd ft_putstr_fd ft_putendl_fd \
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c

OBJ = $(SRC:.c = .o)

$(NAME) :
	$(CC) $(FLAGS) -c $(SRC) -I libft.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean: $(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
