NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = errors/check_errors.c errors/check_letter_in_number.c \
       errors/too_long.c methods/push.c methods/reverse_rotate.c \
       methods/reverse.c methods/swap.c init.c sort/mini_sort.c \
	   sort/min_and_max.c main.c sort/sort.c sort/get_steps.c \
	   sort/cheapest.c sort/turkish_sort.c

LIBFTDIR = libft
LIBFT = $(LIBFTDIR)/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(SRCS) $(LIBFT)
	$(CC) $(CFLAGS) -I. -I$(LIBFTDIR) $(SRCS) $(LIBFT) -o $(NAME)
	@echo "Compiled $(NAME) successfully!"

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

clean:
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re

