#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int x=0, y=0;
    cin>>x>>y;
    int z=sum(x,y);
    cout<<z<<endl;
}
