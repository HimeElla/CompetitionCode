/*
Write a program which will take array of integers as input and
gives array of integers with unique numbers as output
2 3 6 2 7 2 4 6 -> [3 7 4]
1 9 8 2 7 3 2 3 1 -> [9 8 7]
1 2 3 4 5 6 -> [1 2 3 4 5 6]
1 2 4 2 4 1 -> []
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n[1001];
	int m, input, maks = INT_MIN;
	
	memset(n, 0, sizeof n);
	
	cin>>m;
	for(int i = 0; i < m; i++){
		cin>>input;
		n[input]++;
		maks = max(maks, input);
	}
	
	cout<<"["
	for(int i = 0; i <= maks; i++){
		if(n[i] == 1){
			cout<<i<<", ";
		}
	}
	cout<<"]"<<endl;
	
	return 0;
}
