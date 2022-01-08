#include<stdio.h>

int main(){
	int no_rows, rows, columns;
	printf("Enter no of rows: ");
	scanf("%d", &no_rows);
	
	for (rows = 1; rows<=no_rows; rows++){
		for (columns = 1; columns<=rows; columns++){
			printf("* ");
		}
		printf("\n");
	} 
			
//		printf("\n");
	return 0;
}
