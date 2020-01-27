/*
Nama: Stella Sitinjak
NIM: 12S17027
*/

typedef long long int lli;

#include <bits/stdc++.h>
using namespace std;
int main(){
	lli n, k;
	string s = "";
	
	cin>>n>>k;
	
	lli  i, j, m = 1, l = 0, temp = 0;
	lli minn = INT_MAX, p = 0, q = 0;
	for(i = 0; i < n; i++){
		cin>>s[i];
		if(s[i] == '-')	temp--;
		else	temp++;
		cout<<"temp1: "<<temp<<" "<<s[i]<<" "<<i<<endl;
		if(m > k){
			if(s[l] == '-')	temp++;
			else	temp--;
			cout<<"temp2: "<<temp<<" "<<s[l]<<" "<<l<<endl;
			if(minn > temp){
				minn = temp;
				p = l;
				q = i;
				cout<<minn<<" "<<p<<" "<<q<<endl;
			}
			l++;
		}
		m++;
	}
	
	for(i = p; i <= q; i++){
		cout<<s[i];
	}
	cout<<endl;

	return 0;
}

