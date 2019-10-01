#include<stdio.h>
void main(){
    int n,rev=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev+rem*10;
        n=n/10;
    }
    printf("%d",rev);
}