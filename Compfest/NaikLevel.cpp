#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, m, e[21], temp = 0;
	
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		cin>>e[i];
		temp += e[i];
	}
	
	sort(e, e+n);
	
	
	return 0;
}
