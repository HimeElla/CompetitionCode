/*
Take an input as a string and arrange it's every characters in 
alphabetical order from a-z (ascending)
NextGenCoder -> CdeeeGNnortx
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;

	cin>>s;
	int stt = s.length();
	int min, temp;
	for(int i = 0; i < stt-1; i++){
		min = i;
		for(int j = i+1; j < stt; j++){
			if((int)tolower(s[j]) < (int)tolower(s[min]))
				min = j;
		}  
		temp = s[i];
		s[i] = s[min];
		s[min] = temp;
		if(tolower(s[i]) == tolower(s[i+1])){
			if((int)s[i] > (int)s[i+1]){
				temp = s[i];
				s[i] = s[i+1];
				s[i+1] = temp;
			}
		}
	}	
	cout<<s<<endl;
	
	return 0;
}
