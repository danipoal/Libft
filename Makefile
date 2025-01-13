NAME = libft.a
SRCS = src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c

OBJS = $(SRCS:.c=.o)
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
#
