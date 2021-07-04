#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n, i, j;
	
	cin>>n;
	for(i = 1; i <= n; i++){
		for(j = 0; j < i; j++){
			cout<<i;
		}
		cout<<endl;
	}

	return 0;
}

