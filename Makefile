# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 16:15:36 by sbeheret          #+#    #+#              #
#    Updated: 2019/04/19 15:52:02 by sbeheret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

SRC_PATH = srcs

SRC_NAME = ft_atoi.c ft_isalpha.c ft_isprint.c ft_isspace.c ft_strndup.c ft_strnjoin_free.c\
		   ft_memalloc.c ft_memcmp.c ft_memmove.c ft_putchar_fd.c ft_putnbr.c \
		   ft_putstr_fd.c ft_strclr.c ft_strdel.c ft_striter.c ft_strlcat.c ft_strmapi.c \
		   ft_strncpy.c ft_strnstr.c ft_strstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_itoa.c \
		   ft_memccpy.c ft_memcpy.c ft_memset.c ft_putendl.c \
		   ft_putnbr_fd.c ft_strcat.c ft_strcmp.c ft_strdup.c ft_striteri.c ft_strlen.c \
		   ft_strncat.c ft_strrchr.c ft_strsub.c ft_toupper.c ft_isalnum.c \
		   ft_isdigit.c ft_memchr.c ft_memdel.c \
		   ft_putchar.c ft_putendl_fd.c ft_putstr.c ft_strchr.c ft_strcpy.c \
		   ft_strjoin.c ft_strmap.c ft_strncmp.c ft_strnew.c ft_strsplit.c ft_strtrim.c

OBJ_PATH =  obj

INC =  -Iincludes/

NAME =      libft.a

CC =        gcc

RM =		rm -f

CFLAGS =    -Werror -Wall -Wextra

OBJ_NAME =  $(SRC_NAME:.c=.o)

SRC =       $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ =		$(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $@

clean:
	@$(RM) $(OBJ)
	@@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@$(RM) $(NAME)

re:	fclean all
