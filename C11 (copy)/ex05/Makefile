CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = do-op

SRC = srcs/main.c \
      srcs/ft_putnbr.c \
      srcs/ft_putchar.c \
      srcs/ft_atoi.c \
      srcs/ft_strlen.c \
      srcs/ft_find_operator.c \
      srcs/ft_calculator.c
      
OBJS = $(SRC:.c=.o)

HEADER = includes/

all: $(NAME)

$(NAME): $(OBJS) compile

$(OBJS): %.o: %.c 
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

compile:
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
