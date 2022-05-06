#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line_bonus.h"
#include "get_next_line_bonus.c"
#include "get_next_line_utils_bonus.c"
#define BUFFER_SIZE 5

int main(void)
{
int fd;
int fd2;
int fd3;
char *c ;

fd = open("ola.txt", O_RDONLY);
fd2 = open("ola.txt", O_RDONLY);
fd3 = open("ola.txt", O_RDONLY);


c = get_next_line(fd);
printf("%s\n", c);
free(c);
c = get_next_line(fd2);
printf("%s\n", c);
free(c);
c = get_next_line(fd);
printf("%s\n", c);
free(c);
c = get_next_line(fd3);
printf("%s\n", c);
free(c);

}
