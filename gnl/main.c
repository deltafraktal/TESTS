#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

/* int main(void)
{
    int fd;
    char *line;
    int i = 1;

    fd = open("test.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Ligne %d: %s", i, line);
        free(line);
        i++;
    }
    close(fd);
    return (0);
} */

#define YELLOW  "\033[1;34m"
#define PINK  "\033[35m"
#define RESET   "\033[0m"

int main(void)
{
    int fd;
    char *line;
    int i = 1;

	printf(YELLOW "EMPTY\n"RESET );
    fd = open("empty.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Ligne %d: %s", i, line);
        free(line);
        i++;
    }

	printf(YELLOW "ONLY NEWLINE\n"RESET );
	fd = open("only_newline.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Ligne %d: %s", i, line);
        free(line);
        i++;
    }

	printf(YELLOW "ONLY NEWLINE\n"RESET );
	fd = open("single_line.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Ligne %d: %s", i, line);
        free(line);
        i++;
    }

	printf(YELLOW "\nMULTIPLE LINES\n"RESET );
	fd = open("multiple_lines.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
	printf(YELLOW "\nTOO MANY LINES (uncomment)\n"RESET );
	/* fd = open("too_many_lines.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    } */
    close(fd);
    return (0);
}



