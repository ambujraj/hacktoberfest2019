#include<stdio.h>
int main()
{
	int a[10]={2,1,3,0,5,6,9,8,7,4};
	int i,pass,j;
	printf(" the original array is");
	for(i=0;i<10;i++)
	{
		printf(" %d",a[i]);
	}
	for(pass=0;pass<10;pass++)
	{
		for(i=0;i<10;i++)
		{
			if(a[i]>a[i+1])
			{
				j=a[i];
				a[i]=a[i+1];
				a[i+1]=j;
			}
		}
	}
	printf("the asending order is");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	
	
}
