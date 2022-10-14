sources				= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
						ft_memset.c ft_bzero.c ft_strlen.c ft_tolower.c ft_toupper.c \
						ft_memcpy.c ft_atoi.c ft_strchr.c ft_memmove.c ft_strlcpy.c \
						ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_memchr.c ft_memcmp.c \
						ft_calloc.c ft_strdup.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c \
						ft_putnbr_fd.c


objects				= $(sources:.c=.o)

NAME				= libft.a

all:	$(NAME)

$(NAME):	$(objects)
	ar rcs libft.a $(objects)

$(objects):	$(sources)
	gcc -c -Wall -Wextra -Werror $(sources)

clean:
	rm -f $(objects)

fclean:
	rm -f $(objects) $(NAME)

re: fclean all