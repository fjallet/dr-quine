#include <stdio.h>
#include <stdlib.h>
#define C = "#include <stdio.h>%c#include <stdlib.h>%c#define C = %c%s%c%cint main(){%c%cint i = %s;%c%cif (i <= 0)%c%c%creturn;%c%cchar * name = ['S','u','l','l','y','_',atoi(i - 1),'.','c']%c%cfd = fopen(name);%c%cfprintf(name,C,10,10,34,C,34,10,10,9,itoa(i-1),10,9,10,9,9,10,9,10,9,10,9,10);%c}"
int main(){
	int i = 3;
	if (i <= 0)
		return;
	char * name = ['S','u','l','l','y','_',atoi(i - 1),'.','c']
	fd = fopen(name);
	fprintf(name,C,10,10,34,C,34,10,10,9,itoa(i-1),10,9,10,9,9,10,9,10,9,10,9,10);
}