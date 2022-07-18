NAME = push_swap

SRC_DIR = src

PRINTF_DIR = src/ft_printf_bonus

NAME_PRINTF = $(PRINTF_DIR)/libftprintf.a

STR_SRC_DIR = $(SRC_DIR)/str_utils

STR_SRC = $(shell find $(STR_SRC_DIR) -name "*.c")

STR_OBJ = $(addprefix $(OBJ_DIR)/,$(notdir $(STR_SRC:.c=.o)))

LIST_SRC_DIR = $(SRC_DIR)/list_utils

LIST_SRC = $(shell find $(LIST_SRC_DIR) -name "*.c")

LIST_OBJ = $(addprefix $(OBJ_DIR)/,$(notdir $(LIST_SRC:.c=.o)))

PS_SRC_DIR = $(SRC_DIR)/main

PS_SRC = $(shell find $(PS_SRC_DIR) -name "*.c")

PS_OBJ = $(addprefix $(OBJ_DIR)/,$(notdir $(PS_SRC:.c=.o)))

ALGO_SRC_DIR = $(SRC_DIR)/algorithm

ALGO_SRC = $(shell find $(ALGO_SRC_DIR) -name "*.c")

ALGO_OBJ = $(addprefix $(OBJ_DIR)/,$(notdir $(ALGO_SRC:.c=.o)))

OBJ_DIR = obj

OBJ = $(NAME_PRINTF) $(STR_OBJ) $(LIST_OBJ) $(PS_OBJ) $(ALGO_OBJ)

CC = gcc

FLAGS = -Wall -Wextra -Werror -g

INCLUDE = include

all: $(NAME)

ezz:
	@echo $(NAME_PRINTF)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -I$(INCLUDE) $^ -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME_PRINTF):
	@$(MAKE) -C $(PRINTF_DIR)
	@echo "Making printf!\n"

$(OBJ_DIR)/%.o: $(PS_SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(FLAGS) -I$(INCLUDE) -c $< -o $@
	@echo "Compiling main functions!\n"

$(OBJ_DIR)/%.o: $(LIST_SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(FLAGS) -I$(INCLUDE) -c $< -o $@
	@echo "Compiling list functions!\n"

$(OBJ_DIR)/%.o: $(STR_SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(FLAGS) -I$(INCLUDE) -c $< -o $@
	@echo "Compiling string functions!\n"

$(OBJ_DIR)/%.o: $(ALGO_SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(FLAGS) -I$(INCLUDE) -c $< -o $@
	@echo "Compiling algorithm functions!\n"

clean:
	$(RM) -r $(OBJ_DIR)
	$(MAKE) clean -C $(PRINTF_DIR)

fclean: clean
	$(RM) -r $(NAME)
	$(RM) -r $(NAME_PRINTF)

re: fclean
	$(MAKE)
