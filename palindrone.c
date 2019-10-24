#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number ");
    scanf("%d",&n);
    int a=n;
    int r=0;
    while(a!=0)
    {
        int b=a%10;
        r=r*10+b;
        a/=10;
    }
    if(r==n)
        printf("It is a palindrone number");
    else
        printf("It is not a palindrone number");
}

