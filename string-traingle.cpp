#include <stdio.h>

int main(){
	char name[] = "Engineering" ;
	int len, i,j ;
	len = strlen(name);
	for (i=0; i<len; i++){
		for (j=0;j<=i;j++){
			printf("%c",name[j]);
		}
		printf(" \n");
		
	}
	
	return 0;
}
