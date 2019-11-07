#include<iostream>
using namespace std;
int fibonacci(int num)
{
        if((num==1)||(num==0))
        {
                return(num);
        }
        else
        {
                return(fibonacci(num-1)+fibonacci(num-2));
        }
}
int main()
{
        int num,i=0;
        cout<<"\n How many numbers you want for Fibonacci Series : ";
        cin>>num;
        cout<<"\n Fibonacci Series : ";

        while(i<num)
        {
                cout<<" "<<fibonacci(i);
                i++;
        }
    return 0;
}
