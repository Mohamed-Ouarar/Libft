# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 13:38:38 by mouarar           #+#    #+#              #
#    Updated: 2024/11/14 16:21:38 by mouarar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c  ft_memset.c   	\
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_toupper.c ft_strlen.c		\
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_strncmp.c  ft_atoi.c		\
	ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c		\
	ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c 	\
	ft_strmapi.c ft_memcmp.c ft_strlcat.c ft_striteri.c

BONUS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstmap_bonus.c ft_lstiter_bonus.c

RED := \033[31m
GREEN := \033[32m
YELLOW := \033[33m
BLUE := \033[34m
BOLD := \033[1m
RESET := \033[0m

OBJS := $(SRC:%.c=%.o)
BONUS_OBJS := $(BONUS:%.c=%.o)

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
ARNAME = ar crs $(NAME)

all : $(NAME)

%.o : %.c libft.h creat
	@$(CC) $(CFLAGS) -c $< -o $@
creat :
	@echo "$(GREEN)Loading...$(RESET)"

$(NAME) : $(OBJS)
	@$(ARNAME) $(OBJS)
	@echo "$(YELLOW)libft.a$(RESET)" "$(GREEN) was created successfully$(RESET)"

fclean : clean
	@rm -f $(NAME)
	@echo "$(YELLOW)libft.a$(RESET)""$(RED) was deleted successfully$(RESET)"

clean :
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "$(RED)Object files have been removed.$(RESET)"

bonus : $(OBJS) $(BONUS_OBJS)
	@$(ARNAME) $(BONUS_OBJS) $(OBJS)
	@echo "$(GREEN)Library with bonus files compiled successfully!$(RESET)"

re : fclean all

.PHONY: clean creat 
