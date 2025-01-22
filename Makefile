NAME = libft.a
FOLDER = src/
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_memset.c \
	ft_atoi.c ft_bzero.c ft_memcpy.c ft_split.c

OBJS = $(addprefix $(FOLDER), $(SRCS:.c=.o))
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Regla global para compilar la libreria
all: $(NAME)

# Crear biblioteca
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compilar cada archivo en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar objetos, archivos .o
.PHONY: clean
clean:
	rm -rf $(OBJS)

# Limpiar todo
.PHONY: fclean
fclean: clean
	rm -rf $(NAME)
# Limpiar todo y volverlo a compilar
.PHONY: re
re: fclean all
