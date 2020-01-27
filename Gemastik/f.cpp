#include <bits/stdc++.h>
using namespace std;

int main(){
	char s[128];
	int k;
	
	cin.getline(s, sizeof(s));
	cin>>k;
	string result = "";
	for(int i = 0; i < strlen(s); i++){
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			if(k>=0){
				if(isupper(s[i]))
					result += char(int(s[i] + k - 65) % 26 + 65);
				else
					result += char(int(s[i] + k - 97) % 26 + 97);			
			}
			else{
				if(isupper(s[i]))
					result += char(int(s[i] + k - 65) % 26 + 65);
				else
					result += char(int(s[i] + k - 97) % 26 + 97);			
			}
		}
		else{
			result += s[i];
		}
	}
	cout<<result<<endl;
	
	return 0;
}
