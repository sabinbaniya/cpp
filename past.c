#include <stdio.h>

int main(){
	char c;
	FILE *ptr;
	ptr = fopen("this.txt", "r");
	
	FILE *ptr2;
	ptr2 = fopen("new.txt", "w");
	
	char c scang(ptr);
	while(c!= EOF){
		fscanf("%c", ptr);
	}
	
	fclose(ptr);
	
	while(c!= EOF){
		fprintf("%c",ptr2);
	}
	
}
