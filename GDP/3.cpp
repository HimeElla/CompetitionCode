#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <int> maxx, minn;

int main() {
	ll m, n, i, j;
	
	cin>>m>>n;
	string b[m][n];
	for(i = 0; i < m; i++) {
		int maks = INT_MIN, mins = INT_MAX;
		for(j = 0; j < n; j++) {
			cin>>b[i][j];
			if(b[i][j] != "."){
				maks = max(b[i][j], maks);
				mins = min(b[i][j], mins);
			}
		}
		maxx.push_back((int)maks);
		minn.push_back((int)mins);
	}
	int temp = 0, sum = 0;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			if(b[i][j] == "."){
				temp = i;
				break;
			} else {
				sum += (int)b[i][j];
			}
		}
		cout<<endl;
	}

	return 0;
}

