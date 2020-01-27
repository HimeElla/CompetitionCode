/*
Write a program to take one list of string as input for example
["A", "B", "B", "C"] and outputs the most repeated string from
list for above example its "B" and if most repeated string is
more than one then none should get printed.
["A", "B", "C", "A"] -> "A"
["A", "B", "B", "A"] -> "None"
["A", "B", "C", "D"] -> "None"
[] -> "None"
["A", "A", "A", "A"] -> "A"
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, temp = 0, m[1001], cek = 0;
	char s;
	
//	cin>>n;
	n = 4;
	for(int i = 0; i < n; i++){
		cin>>s;
		m[(int)s]++;
		if(m[(int)s] > 1){
			cek++;
		}
		cout<<m[(int)s]<<" "<<s<<" "<<cek<<endl;
	}

	if(cek > 1)
		cout<<"None"<<endl;
	else{
		for(int i = 'A'; i <= 'Z'; i++){
			if(m[i] > 1){
				cout<<(char)i<<endl;
				break;
			}
		}
	}
	
	return 0;
}
