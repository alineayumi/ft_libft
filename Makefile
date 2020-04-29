# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afukuhar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/16 10:52:40 by afukuhar          #+#    #+#              #
#    Updated: 2020/04/28 12:56:00 by afukuhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

FT = ft_atoi ft_isupper ft_memccpy ft_putnbr ft_strmapi ft_atoi_base \
ft_itoa ft_memchr ft_putnbr_fd ft_strncmp ft_bzero ft_itoa_base ft_memcmp \
ft_putstr ft_strnstr ft_calloc ft_memcpy ft_putstr_fd ft_strrchr ft_countword \
ft_memcpy_rev ft_split ft_strtrim ft_isalnum ft_memmove ft_strchr ft_substr \
ft_isalpha ft_memset ft_strdup ft_tolower ft_isascii ft_numdig ft_strjoin \
ft_toupper ft_isdigit ft_putchar ft_strlcat ft_islower ft_putchar_fd ft_strlcpy \
ft_isprint ft_putendl ft_strlen ft_isspace ft_putendl_fd ft_strmap ft_strcat \
ft_strcpy ft_strncpy ft_strncat ft_strcmp ft_strclr ft_memdel ft_memalloc \
ft_strnew ft_strdel ft_striter ft_striteri ft_strequ ft_strnequ ft_strstr

FT_BONUS = ft_lstadd_back ft_lstclear ft_lstiter ft_lstmap ft_lstsize \
ft_lstadd_front ft_lstdelone ft_lstlast ft_lstnew 

OFILES = $(addsuffix .o, $(FT))
CFILES = $(addsuffix .c, $(FT))
OFILES_BONUS = $(addsuffix .o, $(FT_BONUS))
CFILES_BONUS = $(addsuffix .c, $(FT_BONUS))

all:	$(NAME)

$(OFILES):
		$(CC) $(CFLAGS) -c $(CFILES)

$(OFILES_BONUS):
		$(CC) $(CFLAGS) -c $(CFILES_BONUS)

$(NAME): $(OFILES)
		ar rc $(NAME) $(OFILES)
		ranlib $(NAME)

bonus: $(OFILES_BONUS)
		ar rc $(NAME) $(OFILES_BONUS)
		ranlib $(NAME)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
