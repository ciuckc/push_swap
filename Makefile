NAME = push_swap

SRC_DIR = src

SRC = $(shell find $(SRC_DIR) -name "*.c")

OBJ_DIR = obj

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC = gcc 

FLAGS = -Wall -Wextra -Werror

INCLUDE = include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -g -I$(INCLUDE) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(FLAGS) -g -I$(INCLUDE) -c -o $@ $<

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) -r $(NAME)

re: fclean
	$(MAKE)
