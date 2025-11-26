#include "ft_printf.h"
#include <stdio.h>

#define PINK "\033[35m"
#define RESET "\x1b[0m"

int main(void)
{
    char        c = 'A';
    char        *str = "Hello, 42!";
    char        *null_str = NULL;
    int         n =  -2147483648;
    unsigned int u = 4294967295U; // UINT_MAX
    void        *ptr = &n;
    void        *null_ptr = NULL;

    printf(PINK"\n\n _            _        __ _                   _       _    __ \n");
    printf("| |_ ___  ___| |_     / _| |_      _ __  _ __(_)_ __ | |_ / _|\n");
    printf("| __/ _ \\/ __| __|   | |_| __|    | '_ \\| '__| | '_ \\| __| |_ \n");
    printf("| ||  __/\\__ \\ |_    |  _| |_     | |_) | |  | | | | | |_|  _|\n");
    printf(" \\__\\___||___/\\__|___|_|  \\__|____| .__/|_|  |_|_| |_|\\__|_|  \n");
    printf("                |_____|     |_____|_|                       \n\n\n"RESET);


    /* 1: STRINGS */
    printf(PINK "1 STRINGS\n" RESET);
    printf("printf   : [%s]\n", str);
    ft_printf("ft_printf: [%s]\n\n", str);

    printf("printf   : [%s]\n", null_str);
    ft_printf("ft_printf: [%s]\n\n", null_str);

    /* 2: CHAR */
    printf(PINK"2 CHAR\n"RESET);
    printf("printf   : [%c]\n", c);
    ft_printf("ft_printf: [%c]\n\n", c);

    /* 3: SIGNED INTS */
    printf(PINK"3 INTS\n"RESET);
    printf("printf   : [%d] [%i]\n", n, 42);
    ft_printf("ft_printf: [%d] [%i]\n\n", n, 42);

    /* 4: UNSIGNED */
    printf(PINK"4 UNSIGNED\n"RESET);
    printf("printf   : [%u] [%u]\n", u, 0u);
    ft_printf("ft_printf: [%u] [%u]\n\n", u, 0u);

    /* 5: HEX */
    printf(PINK"5 HEX\n"RESET);
    printf("printf   : [x:%x] [x:%x] [X:%X]\n", 0xB16B00B5, 2976579765u, 2976579765u);
    ft_printf("ft_printf: [x:%x] [x:%x] [X:%X]\n\n", 0xB16B00B5, 2976579765u, 2976579765u);

    /* 6: POINTERS */
    printf(PINK"6 POINTERS\n"RESET);
    printf("printf   : [%p] [%p]\n", ptr, null_ptr);
    ft_printf("ft_printf: [%p] [%p]\n\n", ptr, null_ptr);

    /* 7: PERCENT */
    printf(PINK"7 PERCENT\n"RESET);
    printf("printf   : [%%]\n");
    ft_printf("ft_printf: [%%]\n\n");

    /* 8: RETURN VALUES */
    printf(PINK"8 RETURN VALUES\n"RESET);
    int a = printf("printf   : [%s, %d, %c, %x, %p]\n", "ABC", 123, 'Z', 255,  NULL);
    int b = ft_printf("ft_printf: [%s, %d, %c, %x, %p]\n", "ABC", 123, 'Z', 255, NULL);
    printf("printf returned   : %d chars\n", a);
    printf("ft_printf returned: %d chars\n\n", b);


    printf(PINK"9 MORE\n"RESET);
    int		i;
	i = printf("printf   : %s\n", "TEST");
	printf("returned : %d\n", i);
	i = 0;
	i = ft_printf("ft_printf: %s\n", "TEST");
	ft_printf("returned : %d\n", i);

    return 0;
}

/* FOR MAKE FILE
BOLD	:= \033[1m
PINK	:= \033[35m
test: $(NAME)
	@$(CC) $(CFLAGS) $(NAME) main.c -o test
	@echo "${BOLD}${PINK} ✨ Test created. ✨${END}"
    @./a.out
*/