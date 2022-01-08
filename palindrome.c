#include<stdio.h>
#include<string.h>

int main(){

	char string[20];
	int len, k=0;

	printf("Enter the string you want to check palindrome for: \n");
	gets("%s", string);

	len = strlen("string");
	len--;
 
 	while(len>k){
 		if(str[len]!=str[k]){
 				printf("%s isn't palindrome\n", string);
 				exit(0);
 		}

 	len--;
 	k++;

 	else{
 		printf("%s is palindrome\n", string);
 	}

 	}
 	return 0;

}