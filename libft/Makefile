NAME = libft.a
cc_flags = cc -Wall -Wextra -Werror
src =	ft_isascii.c	ft_memmove.c	ft_strlcpy.c	ft_toupper.c\
		ft_atoi.c		ft_isdigit.c	ft_memset.c		ft_strlen.c\
		ft_bzero.c		ft_isprint.c	ft_strchr.c		ft_strncmp.c\
		ft_calloc.c		ft_memchr.c		ft_strdup.c		ft_strnstr.c\
		ft_isalnum.c	ft_memcmp.c		ft_strjoin.c	ft_strrchr.c\
		ft_isalpha.c	ft_memcpy.c		ft_strlcat.c	ft_tolower.c\
		ft_strjoin.c	ft_substr.c		ft_strtrim.c	ft_split.c\
		ft_itoa.c		ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c\
		ft_putstr_fd.c	ft_putendl_fd.c ft_putnbr_fd.c
bns_src =	ft_lstnew_bonus.c		ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c		ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c		ft_lstiter_bonus.c\
			ft_lstmap_bonus.c		ft_lstmap_bonus.c
obj = $(src:.c=.o)
bns_obj = $(bns_src:.c=.o)

all: $(NAME)	

$(NAME): $(obj)
	ar rcs $(NAME) $(obj)

%.o:%.c
	$(cc_flags) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(bns_obj)
	ar rcs $(NAME) $(bns_obj)

.PHONY: all clean fclean re
