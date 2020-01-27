#include <bits/stdc++.h>
using namespace std;
int n[10000001];
int main(){
	int t, input, maks = 0;
	
	cin>>t;
	for(int i = 0; i < t; i++){
		cin>>input;
		n[input]++;
		maks = max(input, maks);
	}
	
	for(int i = 0; i <= maks; i++){
		for(int j = 0; j < n[i]; j++){
			cout<<i;
			if(j < n[i]-1){
				cout<<" ";
			}
		}
		if(i < maks && n[i] > 0){
			cout<<" ";
		}
	}
	cout<<endl;
	
	return 0;
}
