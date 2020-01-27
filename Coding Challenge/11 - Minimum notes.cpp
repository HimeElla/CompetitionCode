/*
Create an algorithm for ATM software which will accept a withdraw
amount is invalid else gives no. of minimum notes needed.
Notes: 50, 100, 200, 500, 2000
2500 -> 4
2501 -> Error
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	
	cin>>n;
	if(n%50 != 0){
		cout<<"Error"<<endl;
	}
	else{
		cout<<(n/2000) 
			+ ((n%2000)/500) 
			+ (((n%2000)%500)/200)
			+ ((((n%2000)%500)%200)/100) 
			+ (((((n%2000)%500)%200)%100)/50)<<endl;
	}
	
	return 0;
}
