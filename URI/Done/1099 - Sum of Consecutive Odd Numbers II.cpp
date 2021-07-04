#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j, n, sum;
	int x, y;
	
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>x>>y;
		sum = 0;
		if(x > y){
			for(j = y+1; j < x; j++)
				if(j%2 != 0)	sum+=j;
		} else {
			for(j = x+1; j < y; j++)
				if(j%2 != 0)	sum+=j;
		}
		cout<<sum<<endl;
	}

	return 0;
}

