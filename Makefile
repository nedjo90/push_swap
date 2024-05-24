SRCS=srcs/ft_free_list.c\
srcs/ft_add_to_linked_list.c\
srcs/ft_free_tab.c\
srcs/ft_argv_is_only_numbers.c\
srcs/ft_create_item.c\
srcs/ft_create_linked_list.c\
srcs/ft_error.c\
srcs/ft_free_list.c\
srcs/ft_is_number.c\
srcs/ft_swap.c\
srcs/ft_push.c\
srcs/ft_rotate.c\
srcs/ft_reverse_rotate.c\
srcs/cost_in_back.c\
srcs/calcul_cost_back.c\
srcs/ft_has_duplicate.c\
srcs/ft_sa.c\
srcs/ft_sb.c\
srcs/ft_ss.c\
srcs/ft_pb.c\
srcs/ft_pa.c\
srcs/ft_ra.c\
srcs/ft_rb.c\
srcs/ft_rr.c\
srcs/ft_rra.c\
srcs/ft_rrb.c\
srcs/ft_rrr.c\
srcs/ft_update_struct_data.c\
srcs/ft_sort_linked_list.c\
srcs/ft_sort_two.c\
srcs/ft_sort_three.c\
srcs/ft_sort_more.c\
srcs/ft_move_from_b_to_a.c\
srcs/ft_is_sorted_linked_list.c\
srcs/ft_rotate_to_target_a.c\
srcs/ft_rotate_to_target_b.c\
srcs/ft_five_optimization.c\
srcs/ft_add_front_to_linked_list.c

LIBFT_INCLUDES=./libft/includes
PUSH_SWAP_INCLUDES=./includes

cc=cc
CFLAGS=-Wall -Wextra -Werror
OBJS=$(SRCS:.c=.o)
INCLUDES= -I $(LIBFT_INCLUDES) -I $(PUSH_SWAP_INCLUDES)
AR=ar rcs
RM=rm -rf
NAME=push_swap
LIB=push_swap.a
MEMCHECK=valgrind --leak-check=full --show-leak-kinds=all -s

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	mv libft/libft.a $(LIB)
	$(AR) $(LIB) $^
	$(CC) $(CFLAGS) push_swap.c -o $(NAME) $(INCLUDES) $(LIB) -g

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./libft
	$(RM) $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re
