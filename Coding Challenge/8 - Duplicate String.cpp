/*
Create a program which accepts a string and returns the string with
all the surrounding duplicates removed from it
NEEXXxTTGGEENNNCCOODEERR -> NEXxTGENCODER
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	
	cin>>s;
	int temp;
	for(int i = 0; i < s.length(); i++){
		if(temp != s[i]){
			temp = s[i];
			cout<<s[i];
		}
	}
	cout<<endl;
	
	return 0;
}
