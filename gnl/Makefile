CC = cc
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=42
SRCS = get_next_line.c get_next_line_utils.c main.c
SRCS_BONUS = get_next_line_bonus.c get_next_line_utils_bonus.c main_bonus.c
RM = rm -rf
# Colors and style
END		:= \033[0m
BOLD	:= \033[1m
GREEN	:= \033[32m
BLUE	:= \033[34m
CYAN	:= \033[36m
PURPLE	:= \033[35m
YELLOW	:= \033[33m

all: test

test : ${SRCS}
	@${CC} ${CFLAGS} ${SRCS}
	@echo "TEST CREATED"
	@./a.out

test_bonus : ${SRCS_BONUS}
	@${CC} ${CFLAGS} ${SRCS_BONUS}
	@echo "TEST BONUS CREATED"
	@./a.out


clean: 
	@echo "${BOLD}${YELLOW}🧹 Cleaning objects...${END}"
	@${RM} a.out
	@echo "${BOLD}${GREEN}✓ Clean complete${END}"

.PHONY: all clean test