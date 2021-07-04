#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	float a, b, n;
	int menu;
	
	do {
		a = b = i = 0;
		do{
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
		do {
			cout<<"novo calculo (1-sim 2-nao)"<<endl;
			cin>>menu;
		}while (menu != 1 && menu != 2);
	} while (menu != 2);

	return 0;
}

