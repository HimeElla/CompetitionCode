#include <bits/stdc++.h>
using namespace std;
vector <int> n;
int main(){
	int t, input;
	
	cin>>t;
	for(int i = 0; i < t; i++){
		cin>>input;
		n.push_back(input);

		sort(n.begin(), n.end());
		
		int cond = (i+1)/2, jlh = i+1;
		if(jlh%2 == 0){
			int sum = n[cond] + n[cond-1];
			
			if(sum%2 == 0)	cout<<sum/2<<endl;
			else{
				float temp = (float)sum/2;
				cout<<fixed<<setprecision(1)<<temp<<endl;
			}
		}
		else	cout<<n[cond]<<endl;	
	}
	
	return 0;
}
