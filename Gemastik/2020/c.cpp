#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	int n;
	int p, q, m, cek = 0;
	
	cin>>n;
	for(i = 0; i < n; i++){
		cek = 0;
		cin>>p>>q>>m;
		for(j = 0; j < m; j++){
			if(cek == 0){
				p /= 2;
				cek = 1;
//				cout<<"p: "<<p<<endl;
			} else {
				q /= 2;
				cek = 0;
//				cout<<"q: "<<q<<endl;
			}
		}
		if(p > q)	cout<<p<<" "<<q<<endl;
		else	cout<<q<<" "<<p<<endl;
	}

	return 0;
}

