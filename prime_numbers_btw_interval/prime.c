#include<stdio.h>
void main()
{
	int a,b,d,i,j;
	printf("ENTER THE RANGE:");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		d=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				d++;
			}
		}
		if(d==1)
			printf("\n%d is a Prime Number",i);
	}
}

