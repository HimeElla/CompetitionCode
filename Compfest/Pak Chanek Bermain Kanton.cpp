#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	long long temp = 0;
	
	cin>>t;
	for(int i = 1; i <= t; i++){
		cin>>n;
		if(t%2 == 0 && i%2 == 0)
			temp += n;
		else if(t%2 != 0 && i%2 != 0)
			temp += n;
	}
	cout<<temp<<endl;
	
	return 0;
}
