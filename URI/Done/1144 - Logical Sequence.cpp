#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	ll n, a, s;
	
	cin>>n;
	for(i = 1; i <= n; i++) {
		for(j = 0; j < 2; j++) {
			a = pow(i,2);
			s = pow(i,3);
			if (j == 0){
				cout<<i<<" "<<a<<" "<<s<<endl;
			} else {
				cout<<i<<" "<<a+1<<" "<<s+1<<endl;
			}
		}
	}

	return 0;
}

