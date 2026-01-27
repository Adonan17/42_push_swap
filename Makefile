NAME		= push_swap

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

# Directories
SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= includes
LIBFT_DIR	= libft

# Libraries
LIBFT		= $(LIBFT_DIR)/libft.a

# Source files
SRC_FILES	= main.c \
			  parse_argv.c \
			  parse_int.c \
			  free_split.c \
			  stack_new.c \
			  stack_push_pop.c \
			  stack_swap_rotate.c \
			  stack_clear.c \
			  stack_utils.c \
			  sort.c \
			  indexing.c \
			  radix.c \
			  op_push.c \
			  op_swap.c \
			  op_rotate.c \
			  op_rev_rotate.c

SRC			= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ			= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

# Colors for output
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
RED			= \033[0;31m
RESET		= \033[0m

# Rules
all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "$(GREEN)✓ push_swap compiled successfully!$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -I$(LIBFT_DIR) -c $< -o $@
	@echo "$(YELLOW)Compiling: $<$(RESET)"

$(LIBFT):
	@echo "$(YELLOW)Building libft...$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "$(GREEN)✓ libft compiled!$(RESET)"

clean:
	@$(RM) -r $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "$(RED)✗ Object files removed$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "$(RED)✗ Executables removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re
