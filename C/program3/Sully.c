#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define C "#include <stdio.h>%c#include <unistd.h>%c#include <stdlib.h>%c#define C %c%s%c%cint main(){%c%cint i = %d;%c%ci--;%c%cchar filename[50];%c%csprintf(filename,%cSully_%%d.c%c, i);%c%cFILE *fd = fopen(filename, %cw%c);%c%cif (!fd){%c%c%creturn (1);%c%c}%c%cfprintf(fd,C,10,10,10,34,C,34,10,10,9,i,10,9,10,9,10,9,34,34,10,9,34,34,10,9,10,9,9,10,9,10,9,10,9,10,9,10,9,10,9,34,34,10,9,10,9,9,10,9,10,9,10,9,10);%c%cfclose(fd);%c%cif (i <= 0){return (0);}%c%cchar command[300];%c%csprintf(command,%cgcc -Wall -Wextra -Werror -o Sully_%%d %%s && ./Sully_%%d%c,i,filename,i);%c%cif (system(command) != 0){%c%c%creturn (1);%c%c}%c%ci--;%c%creturn (0);%c}"
int main(){
	int i = 5;
	i--;
	char filename[50];
	sprintf(filename,"Sully_%d.c", i);
	FILE *fd = fopen(filename, "w");
	if (!fd){
		return (1);
	}
	fprintf(fd,C,10,10,10,34,C,34,10,10,9,i,10,9,10,9,10,9,34,34,10,9,34,34,10,9,10,9,9,10,9,10,9,10,9,10,9,10,9,10,9,34,34,10,9,10,9,9,10,9,10,9,10,9,10);
	fclose(fd);
	if (i <= 0){return (0);}
	char command[300];
	sprintf(command,"gcc -Wall -Wextra -Werror -o Sully_%d %s && ./Sully_%d",i,filename,i);
	if (system(command) != 0){
		return (1);
	}
	i--;
	return (0);
}