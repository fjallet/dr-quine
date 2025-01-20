#include <stdio.h>
void quine(){}
int main(){
	/*it's me again*/
	quine();
	char *c="#include <stio.h>%cvoid quine(){}%cint main(){%c/*it's me again*/%cquine();%cchar *c=%c%s%c;printf(c,10,10,10,10,10,34,c,34,10);}%c/*not exactly the same*/";
	printf(c,10,10,10,10,10,34,c,34,10);
}
/*not exactly the same*/