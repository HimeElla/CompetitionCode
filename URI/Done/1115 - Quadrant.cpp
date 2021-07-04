#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	int x, y;
	
	while (x != 0 || y != 0){
		cin>>x>>y;
		if (x > 0 && y > 0)	cout<<"primeiro"<<endl;
		else if (x > 0 && y < 0)	cout<<"quarto"<<endl;
		else if (x < 0 && y < 0)	cout<<"terceiro"<<endl;
		else if (x < 0 && y > 0)	cout<<"segundo"<<endl;
		else	return 0;
	}
	return 0;
}

