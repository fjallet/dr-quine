#include <stdio.h>
#include <unistd.h>
#define FILE_NAME "Grace_kid.c"
#define FT() int main(){FILE *fd = fopen(FILE_NAME, "w");fprintf(fd,C,10,10,34,FILE_NAME,34,10,34,34,10,34,C,34,10);fclose(fd);return (0);}
#define C "#include <stdio.h>%c#include <unistd.h>%c#define FILE_NAME %c%s%c%c#define FT(x)int main(){FILE *fd = fopen(FILE_NAME,%cw%c);fprintf(fd,C,10,10,34,FILE_NAME,34,10,34,34,10,34,C,34,10);fclose(fd);return (0);}%c#define C %c%s%c%cFT(x){}"
FT();