#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <int> g;

int main(){
	ll i, j;
	int n, input;
	
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>input;
		g.push_back(input);
	}
	
	ll sum = g[n-1];
	for(i = n-2; i >= 0; i--){
		cout<<sum<<" "<<g[i]<<endl;
		sum = powl(g[i], sum);
	}
	cout<<sum%100000037<<endl;

	return 0;
}

