SRCS=\


LIBFT_INCLUDES=./libft/includes
PUSH_SWAP_INCLUDES=./includes

CC=gcc
CFLAGS=-Wall -Wextra -Werror
OBJS=$(SRCS:.c=.o)
CPPFLAGS= -I $(PUSH_SWAP_INCLUDES) -I $(LIBFT_INCLUDES)
AR=ar rcs
RM=rm -rf
NAME=push_swap.out
LIB=push_swap.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	mv libft/libft.a $(LIB)
	$(AR) $(LIB) $^
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LIB) push_swap.c -o $(NAME)

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./libft
	$(RM) $(NAME) $(LIB)

re: fclean all
