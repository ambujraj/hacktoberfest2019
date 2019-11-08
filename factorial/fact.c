#include <stdio.h>


int main()
{
	int a;
	scanf("%d", &a);
	int res = 1;

	while(a)
	{res*=a;
	a--;}

	printf("%d\a", res);
}
