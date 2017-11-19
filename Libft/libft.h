/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <maechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 21:06:34 by maechard          #+#    #+#             */
/*   Updated: 2017/08/19 19:24:49 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *str, int c, size_t len);
void				ft_bzero(void *str, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memccpy(void *dest, const void *src, int c, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t len);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strcpy(char *dest, char *str);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
char				*ft_strcat(char *dest, char *src);
char				*ft_strncat(char *dest, char *src, unsigned int n);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strnstr(const char *str, const char *to_find, size_t l);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
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
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strmap(char *s, char (*f)(char));
char				*ft_strmapi(char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *str, char c);
int					ft_nb_mots(char *s, char c);
int					ft_nb_lettres(char *str, char c);
void				ft_cp(char *src, char *dest, int length);
long				ft_power(int pow, int n);
void				ft_itoa_isneg(int *n, int *sign);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putendl(char *str);
void				ft_putnbr(int nb);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int nb, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_cp(char *src, char *dest, int length);

/*
** FILLIT
*/

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
int					tetcheck(char *str);
int					count(char **map);

#endif
