#include <stdio.h>

int main(){
	char name[] = "PROGRAMMING" ;
	int len, i,j ;
	len = strlen(name);
	for (i=0; i<len; i++){
		for (j=len;j<=0;j++){
			printf("%c",name[j]);
		}
		printf(" \n");
		
	}
	
	return 0;
}
