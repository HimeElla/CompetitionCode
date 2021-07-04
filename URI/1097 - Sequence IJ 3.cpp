#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j, m;
	
	m = 7;
	for(i = 1; i <= 9; i+=2){
		for(j = m; j > m-3; j--)
			printf("I=%d J=%d\n", i, j);
		m += 2;
	}

	return 0;
}

