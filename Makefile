NAME = libft.a
FOLDER = src/
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_memset.c \
	ft_atoi.c ft_bzero.c ft_memcpy.c ft_split.c ft_strdup.c ft_calloc.c \
	ft_memcmp.c ft_memmove.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_strnstr.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(addprefix $(FOLDER), $(SRCS:.c=.o))
BONUS_OBJS = $(addprefix $(FOLDER), $(BONUS:.c=.o))
CC = cc
CFLAGS = -Wall -Wextra -Werror

ifndef B
	SCOPE = $(OBJS)
else
	SCOPE = $(OBJS) $(BONUS_OBJS)
endif


# Regla global para compilar la libreria
all: $(NAME)


# Crear biblioteca
$(NAME): $(SCOPE)
	ar rcs $(NAME) $(SCOPE)

# Compilar cada archivo en .o
%.o: %.c
	$(CC) $(CFLAGS) -g -c $< -o $@


# Regla para crear los bonus 
bonus:
	@make B=42 --no-print-directory


# Limpiar objetos, archivos .o
clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

# Limpiar todo
fclean: clean
	rm -rf $(NAME)
# Limpiar todo y volverlo a compilar
re: fclean all

.PHONY: clean fclean re
