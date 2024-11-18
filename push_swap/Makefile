NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = errors/check_errors.c errors/check_letter_in_number.c \
       errors/too_long.c methods/push.c methods/reverse_rotate.c \
       methods/reverse.c methods/swap.c init.c sort/mini_sort.c \
	   sort/min_and_max.c main.c sort/sort.c sort/get_steps.c
OBJ = $(SRCS:.c=.o)

LIBFTDIR = libft
LIBFT = $(LIBFTDIR)/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "Compiled $(NAME) successfully!"

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(LIBFTDIR) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
