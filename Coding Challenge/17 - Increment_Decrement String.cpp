/*
Write a program which will take one string containing characters
and integers which adds 1 to the digit followed by 'A' and 
subtracts 1 from the digit followed by 'B'
input: string containing charaters (A or B) and integers
output: string containing only integers
2A53B24 -> 26314
3A95A48A -> 310558
7A86B9B0 -> 7968
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	
	cin>>s;
	for(int i = 0; i < s.length()-1; i++){
		int temp = s[i+1];
		if(s[i] == 'A'){
			cout<<temp - 49 + 2;
			i++;
		}
		else if(s[i] == 'B'){
			if((temp-49) > 0)
				cout<<temp - 49;
			i++;
		}
		else{
			cout<<s[i];
		}
	}
	
	return 0;
}
