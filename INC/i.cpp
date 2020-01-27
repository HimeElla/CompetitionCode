#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, cek[160], maks = INT_MIN;
	string s, t;

	memset(cek, 0, sizeof cek);
		
	cin>>n>>s>>t;
	for(int i = 0; i < n; i++){
		if(s[i] == t[i]){
			cek[s[i]]++;
		} else {
			cek[s[i]]++;
			cek[t[i]]++;
		}
		maks = max(cek[s[i]], maks);
		maks = max(cek[t[i]], maks);
	}
	cout<<maks<<endl;
	
	return 0;
}
