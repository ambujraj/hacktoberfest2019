#include <stdio.h>
void main()
{
	int num;
	scanf("%d", &num);
	int fact = num;
	for(int i = 2; i < num; ++i)
		fact *= i;
	printf("%d\a", fact);
}
