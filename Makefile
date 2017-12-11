# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 10:21:01 by sbeheret          #+#    #+#              #
#    Updated: 2017/12/11 16:14:06 by sbeheret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	

LIB =	libft.a

CFLAGS = -Wall -Werror -Wextra

SRCL =	ft_atoi.c ft_isalpha.c ft_isprint.c ft_isspace.c\
		ft_lstadd_end.c ft_lstiter.c ft_memalloc.c ft_memcmp.c ft_memmove.c ft_putchar_fd.c ft_putnbr.c \
		ft_putstr_fd.c ft_strclr.c ft_strdel.c ft_striter.c ft_strlcat.c ft_strmapi.c \
		ft_strncpy.c ft_strnstr.c ft_strstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_itoa.c \
		ft_lstdel.c ft_lstmap.c ft_memccpy.c ft_memcpy.c ft_memset.c ft_putendl.c \
		ft_putnbr_fd.c ft_strcat.c ft_strcmp.c ft_strdup.c ft_striteri.c ft_strlen.c \
		ft_strncat.c ft_strnequ.c ft_strrchr.c ft_strsub.c ft_toupper.c ft_isalnum.c \
		ft_isdigit.c ft_lstadd.c ft_lstdelone.c ft_lstnew.c ft_memchr.c ft_memdel.c \
		ft_putchar.c ft_putendl_fd.c ft_putstr.c ft_strchr.c ft_strcpy.c ft_strequ.c \
		ft_strjoin.c ft_strmap.c ft_strncmp.c ft_strnew.c ft_strsplit.c ft_strtrim.c


SRC =	

CC =	gcc -I./

OBJ = $(SRC:.c=.o)

OBJL =	$(addprefix srcs/,$(SRCL:.c=.o))

.c.o:
	@$(CC) -c $< -o $@

$(NAME): $(OBJ) $(LIB)
	@$(CC) $(CFLAGS) -L./ $(LIB) $(OBJ) -o $(NAME)

$(LIB): $(OBJL)
	@ar rc $(LIB) $(OBJL)
	@ranlib $(LIB)

all: $(NAME)

clean:
	@/bin/rm -f $(OBJL) $(OBJ)

fclean: clean
	@/bin/rm -f $(LIB) $(NAME)

re: fclean all

.PHONY: all clean fclean re
