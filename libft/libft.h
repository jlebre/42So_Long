/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:33:21 by jlebre            #+#    #+#             */
/*   Updated: 2022/06/14 21:08:30 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>

//LIBFT

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
int		ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(char *s, int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int i);
int		ft_tolower(int i);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, int start, int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//GET_NEXT_LINE

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*get_line(char *line, char *buf);
int		check_gnl(char *buf);

//FT_PRINTF

int		ft_printf(const char *c, ...);
int		ft_strlen_pf(const char *str);
int		ft_strchr_pf(const char *s, int c);
int		ft_putchar_fd_pf(char c, int fd);
int		ft_putstr_fd_pf(char *s, int fd);
int		ft_putnbr_fd_pf(int n, int k, int fd);
int		ft_putnbr_base_fd(unsigned int n, char *base, int k, int fd);
int		ft_putnbr_p_fd(unsigned long n, char *base, int k, int fd);
int		ft_putpointer_fd(unsigned long ptr, int fd);
int		ft_unsigned(unsigned int nb, int fd);

//
char	*ft_strjoin_without_newline(char const *s1, char const *s2);
char	*ft_strdup_without_newline(const char *str);
char	*ft_remove_newline(char *str);

#endif
