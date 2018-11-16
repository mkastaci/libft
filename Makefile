NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADERS = libft.h
OBJECT = $(SOURCES:.c=.o)
SOURCES = ft_atoi.c  \
			  ft_memdel.c \
			  ft_putstr_fd.c \
			  ft_striteri.c \
			  ft_strnew.c \
			  ft_bzero.c \
			  ft_memmove.c \
			  ft_strcat.c \
			  ft_strjoin.c \
			  ft_strnstr.c \
			  ft_isalnum.c \
			  ft_memset.c \
			  ft_strchr.c \
			  ft_strlcat.c \
			  ft_strrchr.c \
			  ft_isalpha.c \
			  ft_putchar.c \
			  ft_strclr.c \
			  ft_strlen.c \
			  ft_strstr.c \
			  ft_isascii.c \
			  ft_putchar_fd.c \
			  ft_strcmp.c \
			  ft_strmap.c \
			  ft_strsub.c \
			  ft_isdigit.c \
			  ft_putendl.c \
			  ft_strcpy.c \
			  ft_strmapi.c \
			  ft_tolower.c \
			  ft_isprint.c \
			  ft_putendl_fd.c \
			  ft_strdel.c \
			  ft_strncat.c \
			  ft_toupper.c \
			  ft_memalloc.c \
			  ft_putnbr.c \
			  ft_strdup.c \
			  ft_strncmp.c \
			  ft_memccpy.c \
			  ft_putnbr_fd.c \
			  ft_strequ.c \
			  ft_strncpy.c \
			  memchr.c \
			  ft_memcpy.c \
			  ft_putstr.c \
			  ft_striter.c \
			  ft_strnequ.c \
			  memcmp.c 

OBJECT = $(SOURCES:.c=.o)

$(NAME):
	@$(CC) $(FLAGS) -c $(SOURCES)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

