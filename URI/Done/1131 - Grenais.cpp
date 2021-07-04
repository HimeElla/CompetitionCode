#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	int menu, game, inter, gremio, empates, n, m;
	game = inter = gremio = empates = 0;
	menu == 1;
	
	do{
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		cin>>n>>m;
		game++;
		
		if(n > m)	inter++;
		else if (n < m)	gremio++;
		else	empates++;
		
		cin>>menu;
		if(menu == 2)	exit;
	}while (menu == 1);
	
	printf("%d grenais\n", game);
	printf("Inter:%d\nGremio:%d\nEmpates:%d\n", inter, gremio, empates);
	
	if(inter > gremio)	cout<<"Inter venceu mais"<<endl;
	else if (inter < gremio)	cout<<"Gremio venceu mais"<<endl;
	else if (inter == game && gremio == game)	cout<<"Não houve vencedor"<<endl;

	return 0;
}

