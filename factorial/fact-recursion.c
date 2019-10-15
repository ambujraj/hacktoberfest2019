#include<stdio.h>

int fact(int);

int main()
{
	int n;
	printf("enter no for factorializing or whatever\n");
	scanf("%d",&n);
	printf("\n the factorial is :%d",fact(n));
}

int fact(int n)
{
	if (n>1)
		return n*fact(n-1);
	if (n==1)
		return n;
}
