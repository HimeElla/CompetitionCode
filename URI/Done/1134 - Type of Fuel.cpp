#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j, a, g, d;
	int n;
	a = g = d = 0;
	while (cin>>n) {
		if(n == 4)	break;
		else if (n == 1)	a++;
		else if (n == 2)	g++;
		else if (n == 3)	d++;
	}
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<a<<endl;
	cout<<"Gasolina: "<<g<<endl;
	cout<<"Diesel: "<<d<<endl;

	return 0;
}

