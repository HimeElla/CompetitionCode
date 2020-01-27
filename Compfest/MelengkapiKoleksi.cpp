#include <bits/stdc++.h>
using namespace std;
int b[10000001];
int main(){
	int n, q, input;
	
	cin>>n>>q;
	for(int i = 0; i < n; i++){
		cin>>input;
		b[input]++;
	}
	
	int cek = 0;
	for(int i = 0; i < q; i++){
		cin>>input;
		if(b[input] > 0)
			cout<<"ada"<<endl;
		else
			cout<<"tidak ada"<<endl;
	}
	
	return 0;
}
