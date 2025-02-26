#include <stdio.h>
void quine(){}
int main(){
	/*it's me again*/
	quine();
	char *c="#include <stdio.h>%cvoid quine(){}%cint main(){%c%c/*it's me again*/%c%cquine();%c%cchar *c=%c%s%c;%c%cprintf(c,10,10,10,9,10,9,10,9,34,c,34,10,9,10,9,10,10);%c%creturn (0);%c}%c/*not exactly the same*/";
	printf(c,10,10,10,9,10,9,10,9,34,c,34,10,9,10,9,10,10);
	return (0);
}
/*not exactly the same*/