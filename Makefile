#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbikitar <rbikitar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/04 18:40:55 by rbikitar          #+#    #+#              #
#    Updated: 2015/03/24 16:11:44 by rbikitar         ###   ########.fr        #
#                                                                              #
#******************************************************************************#


NAME		=	libfts.a

NASM		=	~/.brew/bin/nasm

SRC_S		= 	ft_isdigit.s ft_isalpha.s ft_isalnum.s ft_isprint.s \
				ft_isascii.s ft_toupper.s ft_tolower.s ft_bzero.s \
				ft_strlen.s ft_puts.s ft_memset.s ft_memcpy.s ft_strdup.s \
				ft_cat.s ft_strcat.s

SRC_O		=	$(SRC_S:.s=.o)

FLAG_S		=	-f macho64

NAME_LIB	=	libfts.a

all:		$(NAME)

$(NAME):
			@$(NASM) $(FLAG_S) ft_isdigit.s
			@$(NASM) $(FLAG_S) ft_isalpha.s
			@$(NASM) $(FLAG_S) ft_isalnum.s
			@$(NASM) $(FLAG_S) ft_isprint.s
			@$(NASM) $(FLAG_S) ft_isascii.s
			@$(NASM) $(FLAG_S) ft_toupper.s
			@$(NASM) $(FLAG_S) ft_tolower.s
			@$(NASM) $(FLAG_S) ft_bzero.s
			@$(NASM) $(FLAG_S) ft_strlen.s
			@$(NASM) $(FLAG_S) ft_puts.s
			@$(NASM) $(FLAG_S) ft_memset.s
			@$(NASM) $(FLAG_S) ft_memcpy.s
			@$(NASM) $(FLAG_S) ft_strdup.s
			@$(NASM) $(FLAG_S) ft_cat.s
			@$(NASM) $(FLAG_S) ft_strcat.s
			@ar rc $(NAME_LIB) $(SRC_O)
			@ranlib $(NAME_LIB)
clean:
			@rm -Rf $(SRC_O) main.o

fclean:     clean
			@rm -Rf $(NAME_LIB)

re:         fclean all

test:
			@gcc -Wall -Wextra -Werror -c main.c
			@gcc -o toto main.o libfts.a

.PHONY:     all clean fclean re test