#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, m;
	string s, k, l;
	char b;
	
	cin>>n>>m>>s;
	for(int i = 0; i < m; i++){
		int c;
		sort(s.begin(), s.end());
		int cek = 0;
		cin>>b>>k;
		for(int j = 0; j < s.length(); j++){
			if(s[j] == b){
//				s.replace(j, 1, k);
//				j+=k.length()-1;
				l[c] = k;
			}
			else{
				l[c] = s[j];
			}
			c++;
		}
		s = l;
	}
	cout<<s.length()<<endl;
	
	return 0;
}
