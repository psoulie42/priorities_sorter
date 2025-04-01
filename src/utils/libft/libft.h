/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achillesoulie <achillesoulie@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:09:38 by psoulie           #+#    #+#             */
/*   Updated: 2025/04/01 22:09:27 by achillesoul      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}				t_list;

void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void	*dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *ptr, int val, size_t n);

int		ft_isalnum(int a);
long	ft_atoi(const char *str);
int		ft_isalpha(int a);
int		ft_isascii(int a);
int		ft_isdigit(int i);
int		ft_isprint(int a);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int a);
int		ft_toupper(int a);

size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);

char	*ft_itoa(int n);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *hst, const char *ndl, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(const char *s, unsigned int start, size_t l);

char	**ft_split(const char *str, char c);

t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *newlst);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *newlst);

#endif
