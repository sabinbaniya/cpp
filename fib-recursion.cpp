#include<stdio.h>

int fib(int n)
{
	if (n==1 || n==2)
		return 1;
	
	else
		return (fib(n-1)+fib(n-2));
	
}

int main(){
	int num, n,i;
	printf("How many terms do you want to print? ");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
		printf("%d ",fib(i));
}
