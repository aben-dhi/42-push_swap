NAME	= push_swap

SRCS	= push_swap.c actions/pa.c actions/pb.c actions/ra.c actions/rb.c actions/rr.c actions/rra.c actions/rrb.c actions/rrr.c actions/sa.c actions/sb.c actions/ss.c \
			utils/ft_atol.c utils/ft_isdigit.c utils/ft_split.c utils/ft_strcmp.c utils/ft_strjoin.c utils/ft_strlen.c \
			parse/ft_error.c parse/check_input.c
			
OBJS	= $(SRCS:.c=.o)

CC		= cc

FLAGS	= -Wall -Wextra -Werror

.PHONY = all clean fclean re

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all