#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c) { 
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); 			
}

bool checker(string str){
	int cek = 0;
	sort(str.begin(), str.end());
	for(int i = 0; i < str.size(); i++){
		if(isVowel(str[i]) && str[i] != str[i+1]){
			cek++;
		}
	}
	if(cek == 5){
		return true;
	}
}

//int longestVowel(string str) {
//	int cek = 0, sum = 0;
//	if(checker(str)){
//		for(int i = 0; i <= str.size(); i++){
//			if(isVowel(str[i])){
//				cek++;
//			}
//			else{
//				if(cek > 1){
//					sum++;
//				}
//				cek = 0;
//			}
//		}
//	}
//	return sum;
//} 

int main() { 
	string s ;
	
	cin>>s; 
	if(checker(s)){
		int cek = 0, sum = 0;
		for(int i = 0; i <= s.size(); i++){
			if(isVowel(s[i])){
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
	}

	return 0; 
}
