#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	int a, b, hour, n, cek;
	hour = cek = 0;
	
	cin>>a>>b;
	i = a+1;
	while(i < 24 && cek == 0){
		hour++;
		if(i == b)
			cek++;
		i++;
	}
	
	if(cek == 0){
		for(i = 0; i <= b; i++)
			hour++;
	}
		
	printf("O JOGO DUROU %d HORA(S)\n", hour);

	return 0;
}

