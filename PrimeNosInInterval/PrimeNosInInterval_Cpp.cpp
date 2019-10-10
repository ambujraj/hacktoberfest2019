//prime nos. in interval in c++
#include<stdio.h>
int main()
{
        int a,b,flag;
re:
        printf("\nEnter your two numbers (range of numbers)");
        scanf("%d %d",&a,&b);
        if (a==1||b==1)
        {    
        printf("\n 1 is neither prime nor non prime, enter range of numbers excluding 1 again.");
        goto re; 
         }
        if (b<a)
                {      
                	   a=a+b;
                        b=a-b;
                        a=a-b;
                 }

     printf("\nThe prime numbers are: \n");            
     for (int i=a; i<=b;i++)
     { 
     	flag=1;
        for(int j=2;j<i;j++)
                {
                	if(i%j==0)
                 {
                 	flag=0; break;
                 }
                }
                 if (flag==1)
                        printf("%d  ",i);
      }
  return 0;
}

