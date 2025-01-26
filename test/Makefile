NAME = test

CC = cc

FLAGS = -Wall -Wextra -Werror -I./../ -g

SRC = test.c test_mem.c test_str.c test_advancedStr.c test_param_funcs.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c test.h
		$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
		$(CC) -o $(NAME) $(OBJ) -L./../ -l:libft.a

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
