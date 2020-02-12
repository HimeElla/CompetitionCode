#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n, i, j;
	
	cin>>n;
	ll m = n;
	for(i = 0; i < n; i++){
		for(j = 0; j < m-1; j++){
			cout<<".";
		}
		for(j = 0; j <= i; j++){
			cout<<"#";
		}
		cout<<endl;
		m--;
	}

	return 0;
}

