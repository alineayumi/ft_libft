# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afukuhar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/16 10:52:40 by afukuhar          #+#    #+#              #
#    Updated: 2020/04/20 14:54:06 by afukuhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_atoi.c ft_isupper.c ft_memccpy.c ft_putnbr.c ft_strmapi.c \
ft_atoi_base.c ft_itoa.c ft_memchr.c ft_putnbr_fd.c ft_strncmp.c ft_bzero.c \
ft_itoa_base.c ft_memcmp.c ft_putstr.c ft_strnstr.c ft_calloc.c ft_memcpy.c \
ft_putstr_fd.c ft_strrchr.c ft_countword.c ft_memcpy_rev.c ft_split.c \
ft_strtrim.c ft_isalnum.c ft_memmove.c ft_strchr.c ft_substr.c ft_isalpha.c \
ft_memset.c ft_strdup.c ft_tolower.c ft_isascii.c ft_numdig.c ft_strjoin.c \
ft_toupper.c ft_isdigit.c ft_putchar.c ft_strlcat.c ft_islower.c ft_putchar_fd.c \
ft_strlcpy.c ft_isprint.c ft_putendl.c ft_strlen.c ft_isspace.c ft_putendl_fd.c \
ft_strmap.c ft_strcat.c ft_strcpy.c ft_strncpy.c ft_strncat.c ft_strcmp.c \
ft_strclr.c ft_memdel.c ft_memalloc.c ft_strnew.c ft_strdel.c ft_striter.c \
ft_striteri.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strstr.c ft_strsplit.c \
ft_lstdel.c ft_lstadd.c

SRCS_BONUS=ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
ft_lstsize.c ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c

OBJECTS=ft_atoi.o ft_isupper.o ft_memccpy.o ft_putnbr.o ft_strmapi.o \
ft_atoi_base.o ft_itoa.o ft_memchr.o ft_putnbr_fd.o ft_strncmp.o ft_bzero.o \
ft_itoa_base.o ft_memcmp.o ft_putstr.o ft_strnstr.o ft_calloc.o ft_memcpy.o \
ft_putstr_fd.o ft_strrchr.o ft_countword.o ft_memcpy_rev.o ft_split.o \
ft_strtrim.o ft_isalnum.o ft_memmove.o ft_strchr.o ft_substr.o ft_isalpha.o \
ft_memset.o ft_strdup.o ft_tolower.o ft_isascii.o ft_numdig.o ft_strjoin.o \
ft_toupper.o ft_isdigit.o ft_putchar.o ft_strlcat.o ft_islower.o ft_putchar_fd.o \
ft_strlcpy.o ft_isprint.o ft_putendl.o ft_strlen.o ft_isspace.o ft_putendl_fd.o \
ft_strmap.o ft_strcat.o ft_strcpy.o ft_strncpy.o ft_strncat.o ft_strcmp.o \
ft_strclr.o ft_memdel.o ft_memalloc.o ft_strnew.o ft_strdel.o ft_striter.o \
ft_striteri.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strstr.o ft_strsplit.o \
ft_lstdel.o ft_lstadd.o

OBJECTS_BONUS=ft_lstadd_back.o ft_lstclear.o ft_lstiter.o ft_lstmap.o \
ft_lstsize.o ft_lstadd_front.o ft_lstdelone.o ft_lstlast.o ft_lstnew.o

all:	$(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRCS)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

bonus:
		gcc -Wall -Wextra -Werror -c $(SRCS_BONUS)
		ar rc $(NAME) $(OBJECTS_BONUS)
		ranlib $(NAME)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
