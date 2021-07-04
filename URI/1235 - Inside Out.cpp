#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	int n;
	
	cin>>n;
	for(i = 0; i <= n; i++){
		char s[100];
		cin.getline(s, sizeof(s));
		int l = strlen(s)-1;
		for(j = l/2; j >= 0; j--)
			cout<<s[j];
		for(j = l; j > l/2; j--)
			cout<<s[j];
		cout<<endl;
	}

	return 0;
}

