SRCS=srcs/ft_is_tab_of_number.c\
srcs/ft_linked_list_constructor.c\
srcs/ft_new_ps.c\
srcs/ft_display_ps.c\
srcs/ft_display_ps_list_reverse.c\
srcs/ft_display_ps_list.c\
srcs/ft_add_ps.c\
srcs/ft_free_ps_list.c\
srcs/ft_malloc_null_tester.c\

LIBFT_INCLUDES=./libft/includes
PUSH_SWAP_INCLUDES=./includes

CC=clang
CFLAGS=-Wall -Wextra -Werror -pedantic -g
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
	MallocStackLogging=1 leaks -q  --fullContent -atExit -- ./push_swap.out 1 2 3 4 > leaks.txt

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./libft
	$(RM) $(NAME) $(LIB)

re: fclean all
