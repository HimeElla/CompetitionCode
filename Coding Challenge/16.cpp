/*
Write a program which will take one string as an input containing
opening and closing brackets and will give output whether the
brackets are balanced or not.
input = string containing opening and closing brackets
output = whether the string is balanced or not
{([()])} -> Balanced
{()}[()] -> Balanced
{({[}]}) -> Not Balanced
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int cek = 0;
	
	cin>>s;
	for(int i = 0; i < s.length(); i++){
		for(int j = i+1; j < s.length(); j++){
			if(s[i] == s[j]){
				break;
			}
			else if(s[i] != s[j] && j == s.length()-1){
				cek = 1;
			}
		}
		if(cek == 1){
			cout<<"Not Balanced"<<endl;
			return 0;
		}
	}
	cout<<"Balanced"<<endl;
	
	return 0;
}
