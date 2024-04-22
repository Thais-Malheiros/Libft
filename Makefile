# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 16:03:05 by tmalheir          #+#    #+#              #
#    Updated: 2024/03/04 16:38:44 by tmalheir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COUNT := 0
SLEEP := sleep 0.2

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
WHITE = \033[0;37m
RESET = \033[0m

MANDATORY = Static library compiled
CLEAN = Objects deleted
FCLEAN = Static library deleted
LIBNAME = libft
COMP = Compiling

FLAGS = -Wall -Wextra -Werror -g3
ARFLAGS = rcs

SRC = src
INC = includes
OBJ = obj

INCLUDES = -I$(INC)/

CFILES = $(addprefix $(SRC)/, ft_atoi.c ft_bzero.c ft_calloc.c \
				ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c \
				ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
				ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
				ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strdup.c \
				ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strnstr.c \
				ft_strlcpy.c ft_strlen.c ft_strrchr.c ft_strtrim.c \
				ft_substr.c ft_toupper.c ft_tolower.c)
SRC = src
INC = includes
OBJ = obj
OBJECT = $(patsubst %, $(OBJ)/%, $(notdir $(CFILES:.c=.o)))

define pre_re
		fclean all
endef

define compile_c_to_o
		@$(eval COUNT=$(shell expr $(COUNT) + 1))
		@$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@
		@printf "$(GREEN)$(LIBNAME) $(COMP) %d%%\r$(RESET)" $$(echo $$(($(COUNT) * 100 / $(words $(CFILES)))))
endef

define compile_o_to_a
		@$(AR) $(ARFLAGS) $@ $?
		@$(SLEEP)
		@prinf "\n$(MAGENTA)$(MANDATORY)\n$(RESET)"
endef

define clean_files
		@$(RM) -rf $(OBJ)
		@$(SLEEP)
		@printf "$(RED)$(CLEAN)$(RESET)\n"
endef

define clean_lib
		@$(RM) $(NAME) && $(RM) -rf $(OBJ)
		@$(SLEEP)
		@printf "$(RED)$(FCLEAN)$(RESET)\n"
endef

define help
		@echo -e "$(GREEN)Available targets:$(RESET)"
		@echo -e "$(CYAN)all:$(RESET) $(YELLOW)Build the library$(RESET)"
		@echo -e "$(CYAN)clean:$(RESET) $(RED)Remove the object files$(RESET)"
		@echo -e "$(CYAN)fclean:$(RESET) $(RED)Remove the library and the object files$(RESET)"
		@echo -e "$(CYAN)re:$(RESET) $(YELLOW)Rebuild the library$(RESET)"
		@echo -e "$(CYAN)debug:$(RESET) $(WHITE)Build the program with debugging information$(RESET)"
endef

all: $(OBJ) $(NAME)

$(NAME): $(OBJECT)
		$(compile_o_to_a)

$(OBJ):
		@mkdir -p $(OBJ)

$(OBJ)/%.o: $(SRC)/%.c
		$(compile_c_to_o)

clean:
		$(clean_files)

fclean:
		$(clean_lib)

re: $(call pre_re)

help:
	$(help)

.PHONY: all clean fclean re help Makefile

.DEFAULT_GOAL := all
