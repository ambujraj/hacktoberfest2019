#include <stdio.h>


void main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	int res = 1;
	
	while(a)
	{res*=a;
	a--;}

	printf("The factorial is %d", res);
}
