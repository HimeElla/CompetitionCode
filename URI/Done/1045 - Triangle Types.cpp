#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	float a, b, c;
	float j,k,l, n;
	
	cin>>a>>b>>c;
	if (b > a && b > c){
		n = a;
		a = b;
		b = n;
	} else if ( c > a && c > b) {
		n = a;
		a = c;
		c = n;
	}
	j = pow(a,2);
	k = pow(b,2);
	l = pow(c,2);
		
	if(a >= (b+c))
		cout<<"NAO FORMA TRIANGULO"<<endl;
	else {
		if (j == (k+l))
			cout<<"TRIANGULO RETANGULO"<<endl;
		if (j > (k+l))
			cout<<"TRIANGULO OBTUSANGULO"<<endl;
		if (j < (k+l))
			cout<<"TRIANGULO ACUTANGULO"<<endl;
		if (a == b && b == c)
			cout<<"TRIANGULO EQUILATERO"<<endl;
		if ((a == b && b != c) || (a == c && c != b) || (b == c && a != c))
			cout<<"TRIANGULO ISOSCELES"<<endl;
	}

	return 0;
}

