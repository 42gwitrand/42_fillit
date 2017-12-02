/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:01:31 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 11:10:22 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
size_t				ft_strclen(char const *str, char c);
size_t				ft_strlen(const char *str);
size_t				ft_intlen(int n);
size_t				ft_min(size_t a, size_t b);
size_t				ft_max(size_t a, size_t b);
char				*ft_strdup(const char *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *str, const char *search);
char				*ft_strnstr(const char *str, const char *search, size_t n);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_atoi(const char *nptr);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
int					ft_countsplit(char const *str, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(const char *str);
void				ft_putendl(const char *str);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(const char *str, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(const char *str, int fd);
t_list				*ft_lstnew(const void *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

typedef	struct		s_tetri
{
	int				*x;
	int				*y;
	int				i;
	int				j;
	char			symbol;
	struct s_tetri	*next;
}					t_tetri;

int					valid_place(int line, int column, char **map, t_tetri *lst);
t_tetri				**keep(int line, int column, char **map, t_tetri *lst);
void				restart(int line, int column, char **map, t_tetri *lst);
int					fill(int i, int line, char **map, t_tetri **fillst);
int					get_sqrt(int i, int j);
int					charcount(t_tetri **fillst);
void				print_map(char **map, unsigned int size);
int					find_high(int *nb);
void				max(t_tetri **lst);
t_tetri				*charcrea(unsigned int i, int *coox, int *cooy);
void				charadd(t_tetri **fillst, t_tetri *lst);
int					charcount(t_tetri **fillst);
void				chardeluni(t_tetri **fillist, void (*d)(void**));
void				chdel(t_tetri **f, void (*d)(t_tetri**, void (*d)(void**)));
t_tetri				*tetriminos_vault(char *argv, unsigned int verif);
int					size_finder(t_tetri *lst);
char				**map_creator(unsigned int i);
void				vault(t_tetri **fillst, char *str, unsigned int i);
void				*error(char *message);
int					int_error(char *message);
int					tetcheck(char *str);
int					count(char **map);

#endif
