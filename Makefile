SRCS=srcs/ft_is_tab_of_number.c\
srcs/ft_linked_list_constructor.c\
srcs/ft_new_ps.c\
srcs/ft_display_ps.c\
srcs/ft_display_ps_list_reverse.c\
srcs/ft_display_ps_list.c\
srcs/ft_add_ps.c\
srcs/ft_free_ps_list.c\
srcs/ft_malloc_null_tester.c\
srcs/ft_swap_head.c\
srcs/ft_sa.c\
srcs/ft_sb.c\
srcs/ft_ss.c\
srcs/ft_pb.c\
srcs/ft_pa.c\
srcs/ft_add_front.c\
srcs/ft_del_first.c\
srcs/ft_rotate.c\
srcs/ft_reverse_rotate.c\
srcs/ft_ra.c\
srcs/ft_rb.c\
srcs/ft_rr.c\
srcs/ft_rrr.c\
srcs/ft_rra.c\
srcs/ft_rrb.c\
srcs/ft_indexer.c\
srcs/ft_sort.c\
srcs/ft_display_controle.c\
srcs/ft_cost.c\
srcs/ft_sort_three.c\
srcs/ft_size_list.c\
srcs/ft_is_sorted.c\
srcs/ft_reverse_order.c\
srcs/ft_is_reverse_sorted.c\
srcs/ft_cost_to_push.c\
srcs/ft_complex_sort.c\

LIBFT_INCLUDES=./libft/includes
PUSH_SWAP_INCLUDES=./includes

CC=gcc
CFLAGS=-Wall -Wextra -Werror
OBJS=$(SRCS:.c=.o)
CPPFLAGS= -I $(PUSH_SWAP_INCLUDES) -I $(LIBFT_INCLUDES)
AR=ar rcs
RM=rm -rf
NAME=push_swap
LIB=push_swap.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	mv libft/libft.a $(LIB)
	$(AR) $(LIB) $^
	$(CC) $(CFLAGS) push_swap.c -o $(NAME) -I $(PUSH_SWAP_INCLUDES) -I $(LIBFT_INCLUDES) $(LIB) -g
# valgrind --leak-check=full --show-leak-kinds=all -s ./push_swap.out -4 -8 0 3 4 -3 8 6 -10 -5 7 2 5 9 -2 -9 -7 -1 -6 1
# ./push_swap_tester.sh
# leaks --atExit -- ./$(NAME) 1 2 3 4
clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./libft
	$(RM) $(NAME) $(LIB)

re: fclean all
