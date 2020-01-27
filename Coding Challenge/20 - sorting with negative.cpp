/*
Write a program which will take one array of numbers as input and
sorts numbers in ascending order but negative numbers should not
change its position
2 -6 -3 5 8 4 -6 5 -> [2, -6, -3, 4, 5, 5, -6, 8]
4 7 0 2 4 6 3 -> [0, 2, 3, 4, 4, 6, 7]
7 -10 5 -34 -81 1 5 -> [1, -10, 5, -34, -81, 5, 7]
-4, -7, 0, -2, -4, -6, -3 -> [-4, -7, 0, -2, -4, -6, -3]
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
//	int a[1001];
	int a[7] = {-4, -7, 0, -2, -4, -6, -3};
	int n = 7;
	
//	cin>>n;
//	for(int i = 0; i < n; i++){
//		cin>>a[i];
//	}
	int t;
	for(int i = 0; i < n; i++){
		if(a[i] < 0) continue;
		for(int j = i+1; j < n; j++){
			if(a[j] < 0) continue;
			if(a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout<<a[i];
		if(i < n){
			cout<<", ";
		}
	}
	cout<<endl;
	
	return 0;
}
