# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laymard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/11 19:48:57 by laymard           #+#    #+#              #
#    Updated: 2017/05/03 19:51:23 by laymard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_cp.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_itoa_isneg.c ft_lstadd.c \
		ft_lstdel.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
		ft_lstnew.c ft_memalloc.c ft_memallocchar.c ft_memccpy.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c \
		ft_nb_lettres.c ft_nb_mots.c ft_power.c ft_print_words_tables.c \
		ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c \
		ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c \
		ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c \
		ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
		ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
		ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c \
		ft_toupper.c ft_cp.c

OBJS = ft_atoi.o ft_bzero.o ft_cp.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
		ft_isdigit.o ft_isprint.o ft_itoa.o ft_itoa_isneg.o ft_lstadd.o \
		ft_lstdel.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o ft_lstmap.o \
		ft_lstnew.o ft_memalloc.o ft_memallocchar.o ft_memccpy.o ft_memchr.o \
		ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o \
		ft_nb_lettres.o ft_nb_mots.o ft_power.o ft_print_words_tables.o \
		ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o \
		ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_strcat.o ft_strchr.o \
		ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o \
		ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o ft_strlcat.o \
		ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o ft_strncmp.o \
		ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o \
		ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o \
		ft_toupper.o ft_cp.o

D_COLOR= \033[0m
GREEN1=  \033[32m
YELLOW1= \033[33m
PINK1=   \033[35m
CYAN1=   \033[36m

all: $(NAME)

$(NAME):
	@gcc -c $(SRCS)
	@echo "$(CYAN1)Compilation effectuer$(D_COLOR)"
	@ar rc $(NAME) $(OBJS)
	@echo "$(YELLOW1)libft.a a ete cree$(D_COLOR)"
	@ranlib $(NAME)
	@echo "$(PINK1)Et son annexe a ete cree$(D_COLOR)"

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
