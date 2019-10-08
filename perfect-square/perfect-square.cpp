// C++ program to check if a number is perfect square
#include <iostream> 
using namespace std; 
  
bool isPerfectSquare(int n) 
{ 
    for (int i = 1; i * i <= n; i++) { 
  
        // if (i * i = n) 
        if ((n % i == 0) && (n / i == i)) { 
            return true; 
        } 
    } 
    return false; 
} 
   
int main() 
{ 
    long long int n;
    cout<<"Enter the number";
    cin>>n; 
    if (isPerfectSquare(n)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
} 

