#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string a = "I hate";
	string b = "I love";
	
	cin>>n;
	for(int i = 1; i <= n; i++){
		if(i%2 != 0)
			cout<<a;
		else
			cout<<b;

		if(i != n)
			cout<<" that ";
	}
	cout<<" it"<<endl;
	
	return 0;
}
