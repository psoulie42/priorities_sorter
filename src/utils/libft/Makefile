# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achillesoulie <achillesoulie@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 11:38:24 by psoulie           #+#    #+#              #
#    Updated: 2025/04/01 22:31:24 by achillesoul      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRINTF = ft_printf/
GNL = get_next_line/

SRCS = 	ft_atoi.c			\
		ft_bzero.c			\
		ft_calloc.c			\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_itoa.c			\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memcpy.c			\
		ft_memmove.c		\
		ft_memset.c			\
		ft_putchar_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_putstr_fd.c		\
		ft_putnbr_fd.c		\
		ft_putstr_fd.c		\
		ft_split.c			\
		ft_strchr.c			\
		ft_strcmp.c			\
		ft_strdup.c			\
		ft_striteri.c		\
		ft_strjoin.c		\
		ft_strlcat.c		\
		ft_strlcpy.c		\
		ft_strlen.c			\
		ft_strmapi.c		\
		ft_strncmp.c		\
		ft_strnstr.c		\
		ft_strrchr.c		\
		ft_strtrim.c		\
		ft_substr.c			\
		ft_tolower.c		\
		ft_toupper.c		\
		ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		$(PRINTF)ft_printf.c		\
		$(PRINTF)ft_countargs.c		\
		$(PRINTF)ft_putcharn.c		\
		$(PRINTF)ft_putstrn.c		\
		$(PRINTF)ft_putnbrn.c		\
		$(PRINTF)ft_putunbrn.c		\
		$(PRINTF)ft_putnbrhexn.c	\
		$(PRINTF)ft_putptrn.c		\
		$(GNL)get_next_line.c		\

OFILES = $(SRCS:.c=.o)
BOFILES = $(BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

bonus: $(OFILES) $(BOFILES)
		ar rcs $(NAME) $(OFILES) $(BOFILES)

clean:
	rm -f $(OFILES) $(BOFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
