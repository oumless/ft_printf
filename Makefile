NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror


SRCS = ft_printf.c \
      ft_printf_char.c \
      ft_printf_str.c \
      ft_printf_nbr.c \
      ft_printf_hex.c \
      ft_printf_ptr.c \
      ft_printf_unsigned.c 

OBJS = $(SRCS:.c=.o)

RM = rm -f
AR = ar rcs
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
