NAME = libft.a

CFLAGS = -W -Wall -Wextra -Werror
XFLAGS = -fsanitize=address -g2

AR	= ar -rcs
RM	= rm -f
MD = mkdir -p
CP = cp -f

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = inc/

INCLUDE = -I $(INC_DIR)

LIBFT_SRC = ft_isdigit.c ft_isalpha.c ft_isalnum.c

SRCS = $(addprefix $(SRC_DIR), $(LIBFT_SRC))
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
DEPS = $(addsuffix .d, $(basename $(OBJS)))

$(OBJ_DIR)%.o: %.c Makefile
	@$(MD) $(dir $@)
	@$(CC) -MT $@ -MMD $(CFLAGS) $(INCLUDE) -c $< -o $@
	@echo "$(WARN_COLOR)Compiling: $<$(NO_COLOR)"

all:	$(NAME)

$(NAME):	$(OBJS)
					@$(AR) $(NAME) $(OBJS)
					@echo "$(OK_COLOR)Libft Compiled!$(NO_COLOR)"

clean:
					@$(RM) -r $(OBJ_DIR)
					@echo "$(ERROR_COLOR)Dependencies and objects removed$(NO_COLOR)"

fclean: 	clean
					@$(RM) $(NAME)
					@echo "$(ERROR_COLOR)Libft.a removed $(NO_COLOR)"

re:				fclean all

-include $(DEPS)

.PHONY: all clean fclean re

NO_COLOR	= \x1[0m
OK_COLOR = \x1b[32;01m
ERROR_COLOR = \x1b[31;01m
WARN_COLOR = \x1b[33;01m

OK_STRING = $(OK_COLOR) [OK]$(NO_COLOR)
ERROR_STRING = $(ERROR_COLOR) [ERRORS]$(NO_COLOR)
WARN_STRING = $(WARN_COLOR) [WARNINGS]$(NO_COLOR)