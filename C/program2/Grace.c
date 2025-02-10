#include <stdio.h>
#include <unistd.h>
#define NAME = "Grace_kid.c"
#define FT(x)int main(){
	int fd = fopen(NAME,"w");
	fprintf(fd,C,10,10,10,9,34,NAME,34,34,34,10,9,10,10,34,C,34,10,34,NAME,34);
}
#define C = "#include <stdio.h>%c#include <unistd.h>%c#define FT(x)int main(){%c%cint fd = fopen(%c%s%c,%cw%c);%c%cfprintf(NAME,C,10,10,10,9,34,NAME,34,34,34,10,9,10,10,34,C,34,10,34,NAME,34);%c}%c#define C = %c%s%c%cFT(%c%s%c)"
FT(x){}