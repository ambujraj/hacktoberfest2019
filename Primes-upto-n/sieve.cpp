/*
Author : Kanjal Dalal
College : BIT, Mesra
Year/Department : 2nd/cse
E-Mail Id : kanjal1000@hotmail.com
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin >> n;
	bool is_prime[n+1];
	memset(is_prime, true, sizeof(is_prime));
	for(int i = 2; i*i <= n; i++){
		if(is_prime[i]){
			for(int j = i*i; j <= n; j += i){
				is_prime[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(is_prime[i]){
			cout << i << " ";
		}
	}
	return 0;
}

