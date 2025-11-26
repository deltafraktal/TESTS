#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

int main(void)
{
    int     fd1, fd2, fd3;
    char    *line1, *line2, *line3;
    int     done1 = 0, done2 = 0, done3 = 0;

    fd1 = open("file1.txt", O_RDONLY);
    fd2 = open("file2.txt", O_RDONLY);
    fd3 = open("file3.txt", O_RDONLY);
    while (!done1 || !done2 || !done3)
    {
        if (!done1)
        {
            line1 = get_next_line(fd1);
            if (line1)
            {
                printf(RED"fd1: %s"RESET, line1);
                free(line1);
            }
            else
                done1 = 1;
        }
        if (!done2)
        {
            line2 = get_next_line(fd2);
            if (line2)
            {
                printf(GREEN"fd2: %s"RESET, line2);
                free(line2);
            }
            else
                done2 = 1;
        }
        if (!done3)
        {
            line3 = get_next_line(fd3);
            if (line3)
            {
                printf(BLUE"fd3: %s"RESET, line3);
                free(line3);
            }
            else
                done3 = 1;
        }
    }
    close(fd1);
    close(fd2);
    close(fd3);
    return (0);
}