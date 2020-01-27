#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, n, m;
	int maks[1000000], minn[1000000];
	int a, b, c, d;
	
	cin>>t;
	for(int i = 0; i < t; i++){
		int sum = 0;
		int tm[1000000];
		int tempmaks = INT_MIN, tempminn = INT_MAX;
		cin>>n>>m;
		for(int j = 0; j < n; j++){
			cin>>a;
			tempmaks = max(tempmaks, a);
			tempminn = min(tempminn, a);
			cin>>b;
			tempmaks = max(tempmaks, b);
			tempminn = min(tempminn, b);
			cin>>c;
			tempmaks = max(tempmaks, c);
			tempminn = min(tempminn, c);
			cin>>d;
			tempmaks = max(tempmaks, d);
			tempminn = min(tempminn, d);			
			
			maks[j] = tempmaks;
			minn[j] = tempminn;
		}
		for(int j = 0; j < m; j++){
			cin>>tm[j];
		}
		int k = 1;
		for(int j = 0; j < n; j++){
			if(j == tm[0])
				sum += minn[j];
			else if(j == tm[k]){
				sum += maks[j] * 2;
			}
			else{
				sum += maks[j];
			}
			k++;
		}
		printf("Case #%d: %d\n", i, sum);
	}
	
	return 0;
}
