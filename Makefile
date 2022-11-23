# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 02:49:03 by mfouadi           #+#    #+#              #
#    Updated: 2022/11/23 05:41:53 by mfouadi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

AR = ar -rcs

SRC = ft_printf.c

HEADER = ft_printf.h

OBJ = $(addprefix $(OBJ_D)/, $(SRC:.c=.o))

OBJ_D = Mandatory_Obj

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ_D) $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ_D)/%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_D) :
	mkdir Mandatory_Obj

clean :
	$(RM) $(OBJ_D)

fclean : clean
	$(RM) $(NAME)

re : fclean all