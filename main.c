
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "get_next_line.c"
#include "get_next_line_utils.c"
 #define BUFFER_SIZE 5

int main(void)
{
int fd;
char *c ;

fd = open("ola.txt", O_RDONLY);



c = get_next_line(fd);
printf("%s\n", c);
free(c);
c = get_next_line(fd);
printf("%s\n", c);
free(c);
c = get_next_line(fd);
printf("%s\n", c);
free(c);

}
