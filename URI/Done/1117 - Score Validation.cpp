#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	float a, b, n;
	
	a = b = i = 0;
	do {
		cin>>n;
		if(n >= 0 && n <= 10){
			if(i == 0)	a = n;
			else	b = n;
			i++;
		} else {
			cout<<"nota invalida"<<endl;
		}
	} while (b == 0);
	printf("media = %.2f\n", (a+b)/2);

	return 0;
}

