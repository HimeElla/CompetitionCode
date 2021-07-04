#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j, x, y;
	
	cin>>x>>y;
	if (x > y) {
		for (i = y+1; i < x; i++){
			if(i%5 == 2 || i%5 == 3)
				cout<<i<<endl;
		}
	} else {
		for (i = x+1; i < y; i++){
			if(i%5 == 2 || i%5 == 3)
				cout<<i<<endl;
		}
	}

	return 0;
}

