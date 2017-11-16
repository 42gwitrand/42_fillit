# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/11 19:48:57 by tiskow            #+#    #+#              #
#    Updated: 2017/11/14 10:27:33 by tiskow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIB = libft.a

SRCSF = srcs/ft_parser.c \
			libft/libft.a \
			srcs/main.c \
			srcs/map.c \
			srcs/assign.c \
			srcs/charfunctions.c \
			srcs/spot.c \
			srcs/count.c \
			srcs/vault.c

OBJSF = ft_parser.o \
			main.o \
			map.o \
			assign.o \
			charfunctions.o \
			spot.o \
			count.o \
			vault.o

D_COLOR= \033[0m
GREEN1=  \033[32m
GREY1=   \033[37m

all: $(NAME)

$(NAME):
	@make -C ./libft
	@gcc -o $(NAME) $(SRCSF)
	@echo "$(GREY1)L'executable a ete cree$(D_COLOR)"

clean:
	@rm -f $(OBJSF)
	@make -C ./libft clean
	@echo "$(GREEN1)Les .o ont ete supprimer$(D_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@make -C ./libft fclean
	@echo "$(GREEN1)La bibliotheque a egalement ete supprimer$(D_COLOR)"

re: fclean all
