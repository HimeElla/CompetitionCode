#include <bits/stdc++.h>
using namespace std;
int cek = 0;
bool isVowel(char c) { 
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); 			
}

int main(){
	string str;
	int sum = 0;
	
	cin>>str;
	for(int i = 0; i <= str.size(); i++){
		if(isVowel(str[i])){
			cek++;
		}
		else{
			if(cek > 1){
				sum++;
			}
			cek = 0;
		}
	}
	cout<<sum<<endl;
	
	return 0;
}
