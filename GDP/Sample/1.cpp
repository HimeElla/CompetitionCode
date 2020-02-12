#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int sum, i, n, m;
	
	sum = 0;
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>m;
		sum+=m;
	}
	cout<<sum<<endl;
	
	return 0;
}
