SRCS = ft_atoi.c ft_isascii.c ft_split.c ft_strnstr.c ft_strtrim.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_strjoin.c ft_substr.c ft_strdup.c ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strrchr.c ft_strchr.c ft_memcpy.c ft_strncmp.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_isalnum.c ft_bzero.c ft_isalpha.c ft_memset.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
CC = cc

all: $(NAME)	

$(NAME) : $(OBJ)
	ar -crs $(NAME) $(OBJ)
$(OBJ) : $(SRCS)
	$(CC) -c $(FLAGS) -include libft.h $(SRCS)

clean:
	rm -rf $(OBJ)

fclean: clean;
	rm -rf $(NAME)

re: fclean all;