#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	float a, b, c;
	
	cin>>a>>b>>c;
	if(a < (b+c) && b < (a+c) && c < (a+b)){
		printf("Perimetro = %.1f\n", a+b+c);
	} else {
		printf("Area = %.1f\n", ((a+b)*c)/2);
	}

	return 0;
}

