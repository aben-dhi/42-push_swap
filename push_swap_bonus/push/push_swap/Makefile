NAME	= push_swap
NAME_B	= checker

SRCS	= push_swap.c actions/pa.c actions/pb.c actions/ra.c actions/rb.c actions/rr.c actions/rra.c actions/rrb.c actions/rrr.c actions/sa.c \
			actions/sb.c actions/ss.c utils/ft_atoi.c utils/ft_isdigit.c utils/ft_split.c utils/ft_strcmp.c utils/ft_strjoin.c utils/ft_strlen.c parse/free_all.c \
			parse/ft_error.c parse/check_input.c parse/is_sorted.c sorting/sort_three.c sorting/sort_five.c sorting/sort_big.c sorting/sort.c sorting/utils.c  utils/ft_strdup.c \

SRCS_B	= ../checker/checker.c actions/pa.c actions/pb.c actions/ra.c actions/rb.c actions/rr.c actions/rra.c actions/rrb.c actions/rrr.c actions/sa.c \
			actions/sb.c actions/ss.c utils/ft_atoi.c utils/ft_isdigit.c utils/ft_split.c utils/ft_strcmp.c utils/ft_strjoin.c utils/ft_strlen.c parse/free_all.c \
			parse/ft_error.c parse/check_input.c parse/is_sorted.c utils/ft_strdup.c ../checker/execute_coms.c ../checker/get_next_line.c ../checker/get_next_line_utils.c \

OBJS	= $(SRCS:.c=.o)

OBJS_B	= $(SRCS_B:.c=.o)

CC		= cc

FLAGS	= -Wall -Wextra -Werror 

.PHONY = all clean fclean re

all: $(NAME)

bonus: $(NAME_B)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(NAME_B): $(OBJS_B)
	$(CC) $(OBJS_B) -o $(NAME_B)

clean: 
	rm -f $(OBJS) $(OBJS_B)

fclean:	clean
	rm -f $(NAME) $(NAME_B)

re: fclean all