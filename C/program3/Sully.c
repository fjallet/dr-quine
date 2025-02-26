#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define FT() int main(){int i = 5;char filename[50];sprintf(filename,"Sully_%d.c", i);if (i > 0){FILE *fd = fopen(filename, "w");if (!fd){return (1);}fprintf(fd,C,10,10,10,34,34,34,34,34,34,10,34,C,34,10);fclose(fd);char command[300];sprintf(command,"gcc -Wall -Wextra -Werror -o Sully_%d %s && ./Sully_%d",i,filename,i);if (system(command) != 0){return (1);}i--;}return (0);}
#define C "#include <stdio.h>%c#include <unistd.h>%c#include <stdlib.h>%c#define FT() int main(){int i = 5;char filename[50];if (i > 0){FILE *fd = fopen(sprintf(filename,%cSully_%%d.c%c, i), %cw%c);if (!fd){return (1)}fprintf(fd,C,10,10,10,34,34,34,34,34,34,10,34,C,34,10);fclose(fd);char command[300];sprintf(command,%cgcc -Wall -Wextra -Werror -o Sully_%%d %%s && ./Sully_%%d%c,i,filename,i);if (system(command) != 0){return (1);}i--;}return (0);}%c#define C %c%s%c%cFT();"
FT();
