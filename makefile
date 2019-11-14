# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 13:31:12 by jpagacz           #+#    #+#              #
#    Updated: 2019/11/13 11:53:24 by jpagacz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM			= rm -f

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -Iinclude

NAME		= libft.a
SRC			= ft_isdigit.c ft_memset.c ft_strnstr.c ft_atoi.c ft_isprint.c ft_strchr.c\
			  ft_strrchr.c ft_bzero.c ft_memccpy.c ft_strdup.c ft_tolower.c ft_calloc.c\
			  ft_memchr.c ft_strlcat.c ft_toupper.c ft_isalnum.c ft_memcmp.c  ft_strlcpy.c\
			  ft_isalpha.c ft_memcpy.c  ft_strlen.c ft_isascii.c ft_memmove.c ft_strncmp.c\
			  ft_substr.c ft_substr.c ft_strjoin.c  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

OBJ			= ${SRC:.c=.o}
INCLUDE		= libft.h

SRCBO		= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
			  ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
			  ft_lstmap_bonus.c\

OBJBO		= ${SRCBO:.c=.o}

all:		${NAME}

${NAME}:	${OBJ} ${INCLUDE}
		
			ar rc $(NAME) $(OBJ)
		
bonus:		${OBJBO} ${INCLUDE}

			ar rc $(NAME) $(OBJBO)

.c.o:		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			${RM} ${OBJ} ${OBJBO}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
