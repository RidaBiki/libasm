#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbikitar <rbikitar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/04 18:40:55 by rbikitar          #+#    #+#              #
#    Updated: 2015/03/05 17:19:42 by rbikitar         ###   ########.fr        #
#                                                                              #
#******************************************************************************#


NAME        = libfts.a

NASM          = ~/.brew/bin/nasm

SRC_S       = ft_isdigit.s ft_isalpha.s ft_isalnum.s

SRC_O       = $(SRC_S:.s=.o)

FLAG_S      = -f macho64

NAME_LIB    = libfts.a

all:        $(NAME)

$(NAME):
			@$(NASM) $(FLAG_S) ft_isdigit.s
			@$(NASM) $(FLAG_S) ft_isalpha.s
			@$(NASM) $(FLAG_S) ft_isalnum.s
			@ar rc $(NAME_LIB) $(SRC_O)
			@ranlib $(NAME_LIB)

clean:
			@rm -Rf $(SRC_O)

fclean:     clean
			@rm -Rf $(NAME_LIB)

re:         fclean all

.PHONY:     all clean fclean re