#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, temp = 0;
	int cek = 0;
	
	cin>>n;
	if(n == 1)
		return 0;
	else if(n%(n/2) == 0)
		cout<<n/2<<endl;
	else
		cout<<"Prime"<<endl;
	
	return 0;
}
