#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	int a, b, sum;
	
	while(cin>>a>>b){
		sum = 0;
		if(a <= 0 || b <= 0)	return 0;
		else if(a > b){
			for(i = b; i <= a; i++){
				cout<<i<<" ";
				sum+=i;
			}
			cout<<"Sum="<<sum<<endl;
		} else {
			for(i = a; i <= b; i++){
				cout<<i<<" ";
				sum+=i;
			}
			cout<<"Sum="<<sum<<endl;
		}
	}

	return 0;
}

