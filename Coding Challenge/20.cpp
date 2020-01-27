#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, temp, input;
	int n[1001], m[1001];
	
	memset(m, 0, sizeof m);
	
	cin>>t;
	for(int i = 0; i < t; i++){
		cin>>input;
		if(input < 0){
			m[i] = 1;
			n[i] = abs(input);
		}
		else
			n[i] = input;
	}
	
	int sort = 0;
	for(int i = 0; i < t; i++){
		if(m[i] == 1) continue;
		for(int j = i+1; j < t; j++){
			if(m[j] == 1) continue;
			if(n[i] > n[j]){
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
				sort++;
			}
		}
		if(sort > 0) break;
	}
	
	for(int i = 0; i < t; i++){
		if(m[i] == 1)
			cout<<n[i]*(-1);
		else
			cout<<n[i];
		if(i < t-1)
			cout<<", ";
	}
	cout<<endl;
	
	return 0;
}
