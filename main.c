
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "get_next_line.c"
#include "get_next_line_utils.c"
//#define BUFFER_SIZE 2

int main(void)
{
int fd2;
// int  sz;
char *c = (char *) calloc(100, sizeof(char));

fd2 = open("ola.txt", O_RDONLY);
if (fd2 < 0) { perror("r1"); exit(1); }
// sz = read(fd2, c, 20);
//printf("called read(% d, c, 10). returned that"
//      " %d bytes were read.\n", fd2, sz);
 // c[sz] = '\0';
//printf("Those bytes are as follows: %s \n", c);

c = get_next_line(fd2);
printf("%s\n", c);
c = get_next_line(fd2);
printf("%s\n", c);
c = get_next_line(fd2);
printf("%s\n", c);

}
