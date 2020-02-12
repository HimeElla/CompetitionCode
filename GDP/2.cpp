#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <string> s, t;

int main(){
	ll n, i, j;
	string input;
	
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>input;
		int pos = input.find("@");
		int fnd = input.find(".com");
		if(pos != string::npos && fnd != string::npos){
			s.push_back(input);
		}
	}
	for(i = 0; i < s.size(); i++){
//		cout<<s[i]<<endl;
		int cek = 0;
		for(j = 0; j < t.size(); j++){
			if(s[i] == t[j]){
				cek = 1;
				break;
			}
		}
		if(cek == 0){
			t.push_back(s[i]);
		}
	}
	cout<<t.size()<<endl;
	for(j = 0; j < t.size(); j++){
		cout<<t[j];
		if(j < t.size()-1){
			cout<<" ";
		}
	}
	cout<<endl;

	return 0;
}

