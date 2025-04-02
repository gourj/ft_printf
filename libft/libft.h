/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agurdzhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:31:43 by agurdzhi          #+#    #+#             */
/*   Updated: 2025/02/16 17:54:36 by agurdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

//checks if the symbol is a letter; returns 1 or 0 
int		ft_isalpha(int ch);

//checks if the symbol is a digit; returns 1 or 0
int		ft_isdigit(int ch);

//checks if the symbol is alphanumeric; returns 1 or 0 
int		ft_isalnum(int ch);

//checks if the symbol is ASCII character; returns 1 or 0
int		ft_isascii(int ch);

//checks if the symbol is printable; returns 1 or 0
int		ft_isprint(int ch);

//turns uppercase int lowercase; returns lowercase or the initial character
int		ft_tolower(int ch);

//turns lowercase into uppercase; returns uppercase or the initial character
int		ft_toupper(int ch);

//turns ASCII to integer; returns int
int		ft_atoi(const char *str);

//returns length of the string without string termination symbol
size_t	ft_strlen(const char *str);

//appends size elements of the src string to dst string if there is enough space
size_t	ft_strlcat(char *dst, const char *src, size_t size);

//copies size elements of the src string to dst string if there is enough space
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

//compares strings up to count chars; returns the difference between chars 
int		ft_strncmp(const char *s1, const char *s2, size_t count);

//searches to find in src, where bot more than count characters searched
char	*ft_strnstr(const char *src, const char *to_find, size_t count);

//first occurance of given ch in the given str; returns pointer to that ch
char	*ft_strchr(const char *str, int ch);

//last occurance of given ch in the given str; returns pointer to that ch
char	*ft_strrchr(const char *str, int ch);

//sets the first count bytes of dst to value val
void	*ft_memset(void *dst, int val, size_t count);

//sets the first count bytes of dst to zero('\0')
void	ft_bzero(void *dst, size_t count);

//copies count bytes from src to dst; returns pointer to dst
void	*ft_memcpy(void *dst, const void *src, size_t count);

//copies count bytes from src to dst trough temporary array; returns dst
void	*ft_memmove(void *dst, const void *src, size_t count);

//similar to ft_strchr(), except it operates with bytes, not strings
void	*ft_memchr(const void *src, int ch, size_t count);

//compares the count bytes of objects pointed by s1 and s2
int		ft_memcmp(const void *s1, const void *s2, size_t count);

//allocates memory for n_elem elements of size el_size and sets values to 0
void	*ft_calloc(size_t n_elem, size_t el_size);

//duplicates given string by allocating memory; returns pointer to that string
char	*ft_strdup(const char *str);

//allocates memory, then puts there two strings
char	*ft_strjoin(const char *s1, const char *s2);

//allocates and returns a substring
char	*ft_substr(const char *str, unsigned int start, size_t len);

//trims the given string from both ends accordingly to the set
char	*ft_strtrim(const char *str, const char *set);

//splits the given string by delim and returns array of two strings
char	**ft_split(const char *str, char ch);

//turns int to char, similar to atoi but vice versa
char	*ft_itoa(int n);

//aplies f to each character of str and writes the result into new string
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));

//similar to ft_strmapi, except it aplies f to given string directly
void	ft_striteri(char *str, void (*f)(unsigned int, char *));

//own analog of write, but it puts out only one byte
void	ft_putchar_fd(char ch, int fd);

//puts out a string using write to the given fd
void	ft_putstr_fd(char *str, int fd);

//same as ft_putstr_fd(), except it adds a new line in the end
void	ft_putendl_fd(char *str, int fd);

//converts int to ascii and puts it out to given fd
void	ft_putnbr_fd(int nb, int fd);

/***BONUS***PART***/
//creates a new node by allocating memory and assigns NULL to next
t_list	*ft_lstnew(void *content);

//adds a node to the front of the list
void	ft_lstadd_front(t_list **lst, t_list *new);

//counts the number of nodes in the given list
int		ft_lstsize(t_list *lst);

//finds and returns the last node of the given list
t_list	*ft_lstlast(t_list *lst);

//adds given node to the end of the given list
void	ft_lstadd_back(t_list **lst, t_list *new);

//deletes the given node and uses given function to delete the content
void	ft_lstdelone(t_list *lst, void (*del)(void *));

//deletes the list, by deleting nodes one by one, sets the pointer to NULL
void	ft_lstclear(t_list **lst, void (*del)(void *));

//iterates the list and applies f to the content of each node
void	ft_lstiter(t_list *lst, void (*f)(void *));

//creates a new list of elements, which ones meet the conditions of f
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
