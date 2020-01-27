#include <bits/stdc++.h>
using namespace std;
int main(){
	int x, y;
	string s;
	
	cin>>x>>y>>s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'u'){
			y--;
		}
		else if(s[i] == 't'){
			x--;
		}
		else if(s[i] == 's'){
			y++;
		}
		else if(s[i] == 'b'){
			x++;
		}
	}
	cout<<x<<" "<<y<<endl;
	
	return 0;
}
