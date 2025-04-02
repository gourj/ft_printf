NAME = libftprintf.a
cc_flags = cc -Wall -Wextra -Werror
src =	ft_printf.c				ft_print_char.c			ft_print_str.c\
		ft_print_ptr.c			ft_print_int.c			ft_print_hex.c\
		ft_print_unsigned.c		ft_print_percent.c		ft_itoa_unsigned.c
obj = $(src:.c=.o) 
libft = libft/libft.a

all: $(NAME)

$(NAME): $(libft) $(obj)
	cp $(libft) $(NAME)
	ar rcs $(NAME) $(obj)

$(libft):
	make -C libft

%.o: %.c
	$(cc_flags) -c $< -o $@

clean:
	rm -f *.o
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

executable: all 
	cc test.c $(NAME)

.PHONY: all clean fclean re executable
