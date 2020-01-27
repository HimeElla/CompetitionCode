#include <bits/stdc++.h>
using namespace std;
bool XOR(char a, char b){
	return int(a^b);
}

typedef long long int lli;
vector<lli> q;
int main(){
	int n, m, a;
	
	cin>>n>>m;
	while(n--){
		cin>>a;
		q.push_back(a);
	}
	
	int b, c, d;
	while(m--){
		cin>>b>>c>>d;
		if(b == 1)
			q[c] = d;
		else{
			lli sum = 0;
			for(int i = c; i <= d; i++){
				sum+=XOR(c, i);
				cout<<sum<<" "<<XOR(c, i)<<endl;
				if(i == d)
					i = c++;
			}
			cout<<sum<<endl;
		}
	}
	
	return 0;
}
