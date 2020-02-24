#include <stdio.h>

struct block{
	int i;
	char s[5];
};


int main(int arc, char** argv){
	struct block myarray[10];
	struct block* p = myarray;
	for(int i=0; i < 10; i++){
		(p+i)->i  = i;
		sprintf((p+i)->s, "%d-\n", i);
	}
	
	for(int i =0; i< 10; i++){
		printf("%d, %s", (p+i)->i, (p+i)->s);	
	}

	return 0;
}


