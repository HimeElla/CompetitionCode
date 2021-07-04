#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <int> g;

int main(){
	ll i, j;
	int n, m, a, b;
	
	cin>>n>>m;
	for(i = 0; i < n; i++){
		cin>>a;
		g.push_back(a);
	}

	pair <int, int> h[m];
	for(i = 0; i < m; i++){
		cin>>a>>b;
		h[i] = make_pair(a,b);
	}
	
	int sum = 0, maks = 0;;
	for(i = 0; i < m; i++){
		sum = 0;
		sum += g[h[i].first];
		j = 0;
		while (h[j].second != n-1){
			cout<<sum<<" ";
			sum += g[h[j].second];
			j++;
		}
		maks = max(maks, sum);
		cout<<endl<<"maks: "<<maks<<endl;
	}
	

	return 0;
}

