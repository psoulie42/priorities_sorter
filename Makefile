BOLD = \033[1m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RED = \033[0;31m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
COLOUR_RESET = \033[0m

SRCSDIR = src/
ODIR = obj/
LIBFT = src/utils/libft/
UTILS = utils/

FILES = ideas_sorter \
		$(UTILS)idea \

LIB = libft.a
LIBPATH = $(LIBFT)$(LIB)

SRCS = $(addprefix $(SRCSDIR), $(addsuffix .c, $(FILES)))
OFILES = $(addprefix $(ODIR), $(addsuffix .o, $(FILES)))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

NAME = ideas_sorter

.PHONY: all clean fclean re party leak

all: $(NAME)

$(LIBPATH):
	@echo "$(BLUE)$(BOLD)💾 Compiling libft...$(COLOUR_RESET)"
	@make -C $(LIBFT)

$(ODIR)%.o: $(SRCSDIR)%.c
	@mkdir -p $(ODIR) $(ODIR)$(UTILS)
	@echo "$(YELLOW)$(BOLD)💾 Compiling $<...$(COLOUR_RESET)"
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBPATH) $(OFILES)
	@echo "$(YELLOW)$(BOLD)Executable: $@$(COLOUR_RESET)"
	$(CC) $(CFLAGS) $(OFILES) $(LIBPATH) -o $(NAME)
	@echo "$(GREEN)$(BOLD)🎊 Compilation complete! 🎊$(COLOUR_RESET)"

clean:
	@echo "$(RED)$(BOLD)🧹 Removing object files...$(COLOUR_RESET)"
	rm -rf $(ODIR)
	@make -C $(LIBFT) clean
	@echo "$(GREEN)$(BOLD)✔️ Object files removed!$(COLOUR_RESET)"

fclean: clean
	@echo "$(RED)$(BOLD)🗑️  Removing executable $(NAME)...$(COLOUR_RESET)"
	rm -f $(NAME)
	@make -C $(LIBFT) fclean
	@echo "$(GREEN)$(BOLD)✨ All clean! ✨$(COLOUR_RESET)"

party:
	@echo "$(BOLD)Let's party!"
	@echo "$(RED)$(BOLD)  (^-^) $(COLOUR_RESET)"
	@sleep 0.5
	@echo "$(CYAN)$(BOLD) \\(^-^\\) $(COLOUR_RESET)"
	@sleep 0.5
	@echo "$(YELLOW)$(BOLD)  (^-^)  $(COLOUR_RESET)"
	@sleep 0.5
	@echo "$(BLUE)$(BOLD) (/^-^)/ $(COLOUR_RESET)"
	@sleep 0.5
	@echo "$(MAGENTA)$(BOLD)  (^-^)  $(COLOUR_RESET)"
	@sleep 0.5
	@echo "$(GREEN)$(BOLD) \\(^-^)/ $(COLOUR_RESET)"
	@sleep 0.5
	@echo "$(BOLD)Party time is over! Back to work! \n  (^-^)7$(COLOUR_RESET)"

re: fclean all