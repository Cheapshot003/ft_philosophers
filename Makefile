# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ole <ole@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 19:15:42 by ole               #+#    #+#              #
#    Updated: 2023/03/12 19:20:05 by ole              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./src/main.c ./src/exit.c ./src/init.c ./src/utils.c
OBJS	= $(SRCS:.c=.o)

CC		= gcc
RM		= rm -fr
CFLAGS	= -Wall -Wextra -Werror -I. -g
LIBS	= -lpthread

NAME	= philos

all:			$(NAME)

$(NAME):		$(OBJS)
				gcc ${CFLAGS} -o ${NAME} ${OBJS} ${LIBS}

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
