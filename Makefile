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
srcs/ft_add_front_to_linked_list.c\

LIBFT_INCLUDES=./libft/includes
PUSH_SWAP_INCLUDES=./includes

cc=gcc
CFLAGS=-Wall -Wextra -Werror
OBJS=$(SRCS:.c=.o)
CPPFLAGS= -I $(LIBFT_INCLUDES) -I $(PUSH_SWAP_INCLUDES)
AR=ar rcs
RM=rm -rf
NAME=push_swap
LIB=push_swap.a
MEMCHECK=valgrind --leak-check=full --show-leak-kinds=all -s

.silent: $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C ./libft
	mv libft/libft.a $(LIB)
	$(AR) $(LIB) $^
	$(CC) $(CFLAGS) push_swap.c -o $(NAME) $(CPPFLAGS) $(LIB) -g

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./libft
	$(RM) $(NAME) $(LIB)

re: fclean all

launch: re
	./push_swap -6655 -8605 7568 3882 -9306 4543 -2592 -1993 5218 4642 1216 5929 4517 -3541 -4197 -5714 -7494 3873 8787 1240 3471 -7697 5163 -4055 7268 -1248 1820 394 4856 6026 -6051 2010 -5103 -4292 -476 -8002 5324 -8036 -1262 -1781 -2342 -1171 3195 -5410 -757 -3345 -2832 5895 -6000 4792 7650 -981 4108 -6046 181 -308 6340 -4942 -9109 -5625 -6016 1518 2031 -6831 -6117 4662 864 -8070 -6231 -6017 9864 -9561 9022 -5146 -77 -5748 5201 556 803 -3709 -5027 -257 5159 -383 8463 6946 7630 2450 -2284 9227 -8317 8840 5433 -3207 9437 -8132 3762 4293 -6130 -5806 9316 6844 -1882 -1959 -8001 -624 881 -71 9593 8648 1827 3825 3531 -9988 4005 6979 -6558 -7009 3482 1028 -4340 -6971 481 1277 -9348 7761 2303 -8828 4035 3579 -6023 -4392 -1852 7589 -4691 599 -1680 -3027 -2435 -8610 3695 -7414 -7491 5851 -9355 -1071 7090 -5661 6244 186 -7366 3576 9470 4214 8784 -4620 4507 -9630 2378 -6793 -8456 9679 7245 -7448 -2373 1095 -3277 -3973 -2525 -6396 3725 -6502 -7244 6315 8541 -5829 6417 6348 -3506 -7532 2890 6412 7463 1649 4013 9823 -9122 -9938 8534 -8597 1142 5260 5727 9683 -2016 -8602 -1808 2588 3124 4339 -7511 2360 -8694 -6527 -1367 6328 -8264 -6180 8947 -5652 4920 500 -1892 -4128 -1445 6432 -310 6221 -1280 -8897 4550 5119 -6132 -5156 -4330 -4797 -3131 9471 -6437 7392 7910 -6472 6977 4475 -7609 4198 -9996 2952 -1512 8250 6548 -3366 -2133 -4888 -158 8227 1395 2937 637 6163 -7793 6547 -7789 7921 8386 -112 -3681 -1177 -106 -6237 -7720 -5845 8450 1259 -6201 3747 7318 -4463 -9582 6211 5611 -5464 -2688 8868 -777 -8004 -8864 4269 -6463 4930 -9473 7466 7649 -3695 -7340 -2443 -4205 -2283 -6202 -12 -1020 8451 -5175 218 -7543 4788 -3367 225 -612 -457 -7313 8212 7764 3850 1924 -2854 99 4096 -1606 -2482 8569 -7390 2469 -5279 -6937 -3946 -2946 -6354 8097 -3792 -1488 -6058 -4268 -6950 -2012 339 -1288 8669 -8463 -9897 8460 639 5483 -2058 5451 -3688 6374 -689 -2611 -6746 -6514 -6207 -2307 -5369 7008 9264 3359 1360 -4660 6215 -2432 -5335 1432 3842 -6073 8659 -5425 -4544 -4043 -2183 9763 7281 -3107 771 8833 -3696 -1350 -6244 -3949 3424 -8881 -8042 -6478 -4541 -6151 8065 -6819 -3189 -7023 5923 3896 -381 -8424 1141 7363 6662 2661 2146 7898 1958 -8487 7452 7446 6626 -7777 -3180 416 8412 -8034 -4467 -6305 -1441 3622 -4379 9658 9970 8044 3999 -1406 4905 3397 9678 2171 2388 -842 -6035 9161 596 8889 -8257 6816 9381 6366 -2400 -4227 6442 4921 -7722 7835 366 7399 3356 6713 8800 -5572 6705 3742 -952 -877 9952 -9147 -3176 -5164 -2451 643 -7504 5125 -46 -6946 4038 -1464 4845 -1702 724 -5656 9333 4141 3473 -4468 8063 2089 1880 1752 -5141 -1064 497 -7761 -1662 -265 -5697 -2540 -8608 -417 -7464 -1296 -3191 3783 -9465 -9340 9400 6935 6936 4765 -3195 -2830 -5127 4882 -7594 2832 805 6696 -9748 -8566 6053 9497 4657 1844 1266 6276 -9429 | wc -l;
	./push_swap -1024 1420 -4868 5817 -291 -194 6641 8680 -5671 293 2449 3951 -6702 9691 -697 1118 -2854 -7145 -1057 4328 -2282 3500 1314 -4828 -7225 -6163 8639 4439 -7901 -9733 -3583 292 1674 6633 -6678 -4522 8663 9794 -3510 9295 9652 -4146 -2986 6104 4229 -2229 -924 4693 -8379 -8246 -7293 8105 -5407 -5720 -2987 388 4360 893 -1194 8721 7775 8683 5200 7876 -6873 -6942 -7607 1541 -5922 -2358 -3542 -710 1123 -362 5709 -4230 -3286 -4835 -2215 6694 6407 5734 -3269 -5338 2301 -8733 -8285 426 4445 3665 -251 5584 5784 -3948 7420 -8332 100 -5535 5079 5716 -9386 4071 339 -4623 -99 -6281 5122 7936 -696 -230 -9324 -9515 -7919 -7301 4097 6502 4282 8398 -513 4451 318 -77 -86 -9004 -7184 -8270 3657 729 -6724 -5707 5979 1675 -4904 7870 -3647 866 -618 2314 -4472 -4930 -2154 4247 -9985 4667 8194 -1777 2322 505 -2074 -7182 2396 9993 -498 -2256 -317 9477 6719 3385 -7419 -7631 1739 2438 -7776 7656 1633 5451 8353 9527 6651 -5397 6525 -9582 5087 -4157 3277 -8267 8995 -8353 5796 -2722 9260 -6607 -7583 -7356 635 -8507 2402 7748 -3671 -2887 -3185 6674 -3729 -636 5233 7903 -5325 8011 -280 -1543 -7891 -3155 -7001 -6669 -3386 -2751 -90 -76 -1581 7566 -5349 -2724 4720 6373 -2029 5271 1760 -8110 -4622 8766 8238 -6077 -1709 9492 -1339 -3989 5662 -9185 8099 743 -8814 -6024 4756 -3634 4308 -2538 -4387 3998 1144 3559 -3565 -2749 -663 -4085 5578 5417 6245 -375 736 -2057 -1189 6995 -7103 4188 1298 -3793 758 -3029 -6884 1164 1609 -2569 9989 529 -283 -6730 2520 7594 -9600 -7761 -5999 -5573 1726 -2293 8492 1105 4494 -3415 5567 3243 -7926 -7213 -312 -8926 7646 -2247 -746 8066 1310 3423 -506 -939 7026 -6765 -6241 -9878 -3043 9969 -2515 7618 -8403 -7264 5492 6784 2325 -64 -5913 641 2903 9304 8880 -6360 -3003 598 -4091 -4456 -9996 2757 -170 8215 7535 362 -966 9033 3218 8148 5085 -6688 -9173 -5162 -6120 2691 1340 -6843 7864 -4931 5127 7891 -9500 -6845 -8825 5843 -8845 1825 -4950 7609 2223 4615 -4251 -4684 -456 9439 9934 9514 5790 2140 9916 1734 9695 -7164 -8449 3912 -3354 -9534 8758 9919 -2632 -2655 -7808 2250 -1976 5052 -8687 -7948 7869 -6948 5590 5162 -7475 4635 -4436 -712 3628 -3152 -4537 -1387 2084 -5940 9241 3760 -196 1255 7102 -4209 561 -3316 -8095 7403 -262 6481 -2712 8159 -9710 -8918 9633 -8377 7146 9490 1415 8507 556 8535 7940 -9707 1729 -9513 -6451 9214 8514 3352 9433 841 681 7495 4059 -9758 -398 -4672 -8005 -6652 -9603 -1843 9388 2767 2044 12 7148 9874 -418 8047 -5718 -3367 -4354 2171 452 -8660 -8370 9741 -3343 13 -8898 2768 3644 8237 3974 -4779 -6347 -7408 8257 -5374 -2454 9198 -495 -8986 -5570 5221 284 4893 -3955 -6990 2403 379 -3831 -3030 -824 -4767 -3437 9539 -5461 -753 819 3800 270 4490 -8053 395 -757 9716 4495 7795 -2905 4367 -6549 6637 -7057 -8955 4921 1703 2854 1536;
	# ./push_swap -450 237 567 812 -345 129 963 487 -239 650 321 | wc -l;
