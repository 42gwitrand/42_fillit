#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 18:01:19 by gwitrand          #+#    #+#              #
#    Updated: 2017/11/09 18:01:23 by gwitrand         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

DNAME	=	libft.o

SRCS	=	ft_lstadd.c	\
			ft_memdel.c	\
			ft_strcat.c	\
			ft_strlcat.c	\
			ft_strstr.c	\
			ft_lstdel.c	\
			ft_memmove.c	\
			ft_strchr.c	\
			ft_strlen.c	\
			ft_strsub.c	\
			ft_lstdelone.c \
			ft_memset.c \
			ft_strclen.c \
			ft_strmap.c \
			ft_strtrim.c \
			ft_atoi.c \
			ft_lstiter.c \
			ft_min.c \
			ft_strclr.c \
			ft_strmapi.c \
			ft_tolower.c \
			ft_bzero.c \
			ft_lstmap.c \
			ft_putchar.c \
			ft_strcmp.c \
			ft_strncat.c \
			ft_toupper.c \
			ft_intlen.c \
			ft_lstnew.c \
			ft_putchar_fd.c \
			ft_strcpy.c \
			ft_strncmp.c \
			ft_isalnum.c \
			ft_max.c \
			ft_putendl.c \
			ft_strdel.c \
			ft_strncpy.c \
			ft_isalpha.c \
			ft_memalloc.c \
			ft_putendl_fd.c \
			ft_strdup.c \
			ft_strnequ.c \
			ft_isascii.c \
			ft_memccpy.c \
			ft_putnbr.c \
			ft_strequ.c \
			ft_strnew.c \
			ft_isdigit.c \
			ft_memchr.c \
			ft_putnbr_fd.c \
			ft_striter.c \
			ft_strnstr.c \
			ft_isprint.c \
			ft_memcmp.c \
			ft_putstr.c \
			ft_striteri.c \
			ft_strrchr.c \
			ft_itoa.c \
			ft_memcpy.c \
			ft_putstr_fd.c \
			ft_strjoin.c \
			ft_strsplit.c \
			ft_countsplit.c

OBJS	= $(patsubst %.c,%.o,$(SRCS))

HEADER = -I ./includes/

CC = gcc -c

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

$(NAME): $(OBJS)
	@(ar rc $(NAME) $(OBJS))
	@(ranlib $(NAME))
	@echo "----------------------------------"
	@echo "[\033[32m✔\033[0m] Compilation : $@"
	@echo "----------------------------------"

all: $(NAME)

%.o: %.c
	@($(CC) $(CFLAGS) $(HEADERS) -o $@ $^)
	@echo "\033[0m[\033[32m✔\033[0m] Function : $@ \033[0m"

clean:
	@(rm -rf *.o)
	@echo "----------------------------------"
	@echo "[\033[32m✔\033[0m] Libft file *.o Objects deleted"
	@echo "----------------------------------"

fclean: clean
	@(rm -rf $(NAME))
	@echo "----------------------------------"
	@echo "[\033[32m✔\033[0m] $(NAME): All deleted"
	@echo "----------------------------------"

re: fclean all

.PHONY: fclean clean all
