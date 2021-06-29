# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/20 17:25:31 by egomes            #+#    #+#              #
#    Updated: 2021/06/20 17:25:31 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_putchar.c ft_putstr.c

SERVER = server
SERVER_SRCS = server.o ft_atoi.o ft_putchar.o ft_putstr.o

CLIENT = client
CLIENT_SRCS = client.o ft_atoi.o ft_putchar.o ft_putstr.o

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(SERVER) $(CLIENT) 

$(CLIENT) : $(CLIENT_SRCS)
	@$(CC) $(CLIENT_SRCS) -o $(CLIENT)

$(SERVER) : $(SERVER_SRCS)
	@$(CC) $(SERVER_SRCS) -o $(SERVER)

%.o : %.c
	@$(CC) $(CFLAGS) $< -c

clean :
	@rm -f *.o

fclean : clean
	@rm -f $(SERVER) $(CLIENT)

re : fclean all

.PHONY : all clean fclean re