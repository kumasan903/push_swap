NAME	= push_swap
SRCS	= main.c lib.c standard_case.c
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all	: $(NAME)

$(NAME)	: $(OBJS)
	$(MAKE) -C libft
	$(CC) $(CFLAGS) $(OJBS) libft/libft.a -o $(NAME)

clean	:
	$(RM) $(OBJS)
	$(MAKE) clean -C libft

fclean	: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C libft

re	: fclean all

.PHONY	: clean fclean re all
