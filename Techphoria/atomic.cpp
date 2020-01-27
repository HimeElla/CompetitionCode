#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, m;
	
	cin>>n>>m;
	if(pow(2, n-1) >= m){
		cout<<"menang"<<endl;
	}
	else{
		cout<<"kalah"<<endl;
	}
	
	return 0;
}
