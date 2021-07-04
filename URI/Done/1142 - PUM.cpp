#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	ll n, m;
	
	cin>>n;
	m = 1;
	for(i = 1; i <= n; i++){
		cout<<m<<" "<<m+1<<" "<<m+2<<" "<<"PUM"<<endl;
		m += 4;
	}

	return 0;
}

