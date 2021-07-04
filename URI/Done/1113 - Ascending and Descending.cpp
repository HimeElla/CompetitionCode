#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	int a, b;
	
	while (cin>>a>>b){
		if (a > b)	cout<<"Decrescente"<<endl;
		else if (a < b)	cout<<"Crescente"<<endl;
		else if (a == b)	return 0;
	}

	return 0;
}

