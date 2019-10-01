#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int d, rev = 0, n1;
	n1 = n;
	while(n > 0){                    
		d = n%10;
		rev = (rev*10) + d;
		n /= 10;
	}
	if(rev == n1)
	cout << "The number is a palindrome number.\n";
	else
	cout << "It is not a palindrome number.\n";
	
	return 0;
}
