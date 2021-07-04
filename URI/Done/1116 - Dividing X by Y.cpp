#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j, n;
	int x, y;
	
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>x>>y;
		float s = abs((float)x)/abs((float)y);
		if(y == 0)
			cout<<"divisao impossivel"<<endl;
		else if (x < 0 || y < 0){
			printf("-%.1f\n", s);
		} else
			printf("%.1f\n", s);
	}

	return 0;
}

