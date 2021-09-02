# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 18:26:07 by mjose-ye          #+#    #+#              #
#    Updated: 2021/08/31 14:10:03 by mjose-ye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## name é o arquivo compilado da biblioteca ##
NAME = libft.a

## chamada do header ##
HEADER = libft.h

## chama os arquivos que vão ser compilados ##
SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strncmp.c \
			ft_strchr.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_strlcpy.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strrchr.c \
			ft_strlcat.c \

## convertendo arquivos .c em .o ##
OBJS	= ${SRCS:.c=.o}

## compilador usado ##
CC	= clang

## paramentros utilizados na compilação ##
CFLAGS	= -Wall -Werror -Wextra -g -I. -c

## quando colocar o make, ele vai começar pelo arquivo libft.a ##
all: $(NAME)

## Cria o arquivo libft.a com os .o dentro ##
$(NAME): $(OBJS)
	ar rcs $@ $^
## estudar os comandos ##


## chama os arquivos indicados no
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $^

## deleta os arquivos .o ##
clean:
	rm -f $(OBJS)

## deleta o arquivo libft.a ##
fclean: clean
	rm -f $(NAME)

## Ele deleta e refaz o comando make ##
re: fclean all
