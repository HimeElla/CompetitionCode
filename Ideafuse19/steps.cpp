#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int n;
	string s;
	
	cin>>t;
	for(int i = 0; i < t; i++){
		int maks = 0, minn = 0;
		cin>>n>>s;
		printf("Case #%d: ", i+1);
		for(int j = 2; j < n; j += 2){
			if(s[j] == '0'){
				maks++;
			}
		}
		for(int j = 1; j < n; j += 2){
			if(s[j] == '0'){
				minn++;
			}
		}
		int res = min(minn, maks);
		if(n == 1 && s[0] == '0')
			res = 1;
		cout<<res<<endl;
	}
	
	return 0;
}
