#include<stdio.h>
int main()
{
	int i=1,m=0,j=0,num,k[20];
	printf("\nENTER THE NUMBER : ");
	scanf("%d",&num);
	while(num>9)
	{
		k[j]=num%10;
		num/=10;
		j++;
	}
	k[j]=num;
	for(num=j;num>=0;num--)
	{
		m=m+i*(k[num]);
		i*=10;
	}
	printf("\nTHE REVERSE NUMBER : %d",m);
}
