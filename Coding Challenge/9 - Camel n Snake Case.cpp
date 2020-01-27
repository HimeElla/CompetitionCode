/*
Create a program which will accept a string and checks whether
string is in camelCase or snake_case and also create two functions
getCamelCase() and get_snake_case() to convert snake_case into
camelCase or vise versa
*/

#include <bits/stdc++.h>
using namespace std;
void getCamelCase(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '_'){
			cout<<(char)toupper(s[i+1]);
			i++;
		}
		else
			cout<<s[i];
	}
	cout<<endl;
}

void get_snake_case(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
			cout<<"_"<<(char)tolower(s[i]);
		else
			cout<<s[i];
	}
	cout<<endl;
}

int main(){
	string s;
	
	cin>>s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '_'){
			getCamelCase(s);
			break;
		}
		else if(s[i] >= 'A' && s[i] <= 'Z'){
			get_snake_case(s);
			break;
		}
		else if(i == s.length()-1){
			cout<<"not camelCase or snake_case."<<endl;
		}
	}
	
	return 0;
}
