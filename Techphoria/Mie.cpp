#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, b, d;
	
	cin>>t;
	for(int i = 1; i <= t; i++){
		cin>>b>>d;
		if(b>=d){
			cout<<(b/d)*d<<endl;
		}
		else{
			cout<<b<<endl;
		}
	}
	
	return 0;
}
