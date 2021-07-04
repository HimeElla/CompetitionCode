#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	int n, m, input[10], i, j;
	
	// Menerima input banyak case
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		// Menerima input banyak angka dalam array
		scanf("%d", &m);
		int jumlah = 0;
		for(j = 0; j < m; j++){
			scanf("%d", &input[j]);

			// Memeriksaangka yang duplikat di dalam array
			if(input[j] == input[j+1]){
				jumlah += 1;
			}
		}
		
		// Mengeluarkan output jumlah angka yang duplikat
		// Penulisan output adalah "Case #"
		printf("Case #%d: %d\n", i, jumlah);
	}

	return 0;
}

