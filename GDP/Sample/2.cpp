#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, j, m, temp;
	
	cin>>n;
	m = n;
	temp = 1;
	for(i = 0; i < m; i++){
		for(j = 0; j < n-1; j++){
			cout<<" ";
		}
		if(temp <= m){
			for(j = 0; j < temp; j++){
				cout<<"#";
			}
		}
		cout<<endl;
		n--;
		temp++;
	}
	
	return 0;
}
