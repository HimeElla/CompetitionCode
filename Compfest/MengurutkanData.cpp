#include <bits/stdc++.h>
using namespace std;
vector <int> n;
int main(){
	int t, input;
	
	cin>>t;
	for(int i = 0; i < t; i++){
		cin>>input;
		n.push_back(input);
	}
	
	sort(n.begin(), n.end());
	for(int i = 0; i < t; i++){
		cout<<n[i];
		if(i < t-1)
			cout<<" ";
	}
	cout<<endl;
	
	return 0;
}
