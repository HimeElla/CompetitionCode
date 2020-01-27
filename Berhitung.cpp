#include <bits/stdc++.h>
using namespace std;
 typedef long long int lli;

vector< pair <lli, lli> > q;
int main(){
	lli n, l, r, sum = 0;
		
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>l>>r;
		for(int j = l; j < r; j++){
			if(q[j].second == 0){
				sum+=j;
				q[j].second = 1;
			}
		}
	}
	cout<<sum<<endl;
	
	return 0;
}
