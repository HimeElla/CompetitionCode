#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	char warna[10];
	
	scanf("%s", &warna);
	if(strcmp(warna, "Merah")){
		printf("Kuning\n");
	} else if (strcmp(warna, "Hijau")){
		printf("Cokelat\n");
	} else if (strcmp(warna, "Biru")){
		printf("Hitam\n");
	} else {
		printf("Putih\n");
	}

	return 0;
}

