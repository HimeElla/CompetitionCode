/*
A number is called perfect number, if it's equal to the sum of it's
proper positive divisor excluding the number itself.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int temp = 0;
	
	cin>>n;
	for(int i = 1; i < n; i++){
		if(n%i == 0){
			temp+=i;
		}
	}
	if(temp == n){
		cout<<"Perfect Number."<<endl;
	}
	else{
		cout<<"Nope!"<<endl;
	}
	
	return 0;
}
