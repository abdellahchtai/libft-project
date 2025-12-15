# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/25 15:41:43 by abchtaib          #+#    #+#              #
#    Updated: 2025/10/27 15:33:33 by abchtaib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = cc

RM = rm -rf


SRC = ft_atoi.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
	  ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c ft_strncmp.c \
	  ft_calloc.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c \
	  ft_isalnum.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c \
      ft_isalpha.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c \
	  ft_isascii.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c \
	  ft_isdigit.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c

BONUS = ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstadd_back_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c

OBJS = $(SRC:%.c=%.o)

OBJB = $(BONUS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus : $(OBJB) $(OBJS)
	ar rc $(NAME) $(OBJB) $(OBJS)
clean : 
	$(RM) $(OBJS) $(OBJB)

fclean : clean 
	$(RM) $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re
