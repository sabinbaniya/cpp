#include<stdio.h>
#include<string.h>

int main(){

	char string[20];
	int len, k=0;

	printf("Enter the string you want to check palindrome for: \n");
	gets(string);

	len = strlen("string");
	//len=len-1;
	
	printf("%d  %d", len,k);
	 
 	while(len>k){
 		if(string[len]!=string[k]){
 				printf("%s isn't palindrome\n", string);
 				exit(0);
 		}
 		
 		len--;
 		k++;
 	}
 	
 	printf("%s is palindrome\n", string);
 	return 0;

}
