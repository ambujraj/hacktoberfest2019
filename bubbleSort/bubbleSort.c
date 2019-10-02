#include<stdio.h>
#include<conio.h>

void bubble_Sort(int a[], int n)
{
    int i,temp=0;
    if(n==1)
        return;

    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    bubble_Sort(a,n-1);
}

void main()
{
    int a[10],i,n;
    printf("enter the total no  of elements in array\t");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    bubble_Sort(a,n);
    for(i=0;i<n;i++)
        {
            printf("%d",/a[i]);
        }
}
