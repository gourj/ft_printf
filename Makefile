NAME = libftprintf.a
cc_flags = cc -Wall -Wextra -Werror
src_ft_printf =	ft_printf.c				ft_print_char.c			ft_print_str.c\
				ft_print_ptr.c			ft_print_int.c			ft_print_hex.c\
				ft_print_unsigned.c		ft_print_percent.c		ft_itoa_unsigned.c
obj_libft =	libft/ft_isascii.o		libft/ft_memmove.o		libft/ft_strlcpy.o\
			libft/ft_toupper.o		libft/ft_atoi.o			libft/ft_isdigit.o\
			libft/ft_memset.o		libft/ft_strlen.o		libft/ft_bzero.o\
			libft/ft_isprint.o		libft/ft_strchr.o		libft/ft_strncmp.o\
			libft/ft_calloc.o		libft/ft_memchr.o		libft/ft_strdup.o\
			libft/ft_strnstr.o		libft/ft_isalnum.o		libft/ft_memcmp.o\
			libft/ft_strjoin.o		libft/ft_strrchr.o		libft/ft_isalpha.o\
			libft/ft_memcpy.o		libft/ft_strlcat.o		libft/ft_tolower.o\
			libft/ft_strjoin.o		libft/ft_substr.o		libft/ft_strtrim.o\
			libft/ft_split.o		libft/ft_itoa.o			libft/ft_strmapi.o\
			libft/ft_striteri.o		libft/ft_putchar_fd.o	libft/ft_putstr_fd.o\
			libft/ft_putendl_fd.o	libft/ft_putnbr_fd.o
obj_ft_printf = $(src_ft_printf:.c=.o)
libft = libft/libft.a

all: $(NAME)

$(NAME): $(libft) $(obj_libft) $(obj_ft_printf)
	ar rcs $(NAME) $(obj_libft) $(obj_ft_printf)

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
