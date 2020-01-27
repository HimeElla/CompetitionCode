/*
Write a program which will take two arrays as input and will
display two arrays with union and intersection of them
note: only arrays are allowed sets and lists are not allowed
A: 1 3 4 5 6
B: 2 3 6 4 8
UNION: 1 2 3 4 5 6 8
INTERSECTION: 3 6 4

A: 1 2 3 4 5
B: 3 1 6 7 8
UNION: 1 2 3 4 5 6 7 8
INTERSECTION: 3 1
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, a[1001], b[1001], i, input, maks = INT_MIN;

	memset(a, 0, sizeof a);
	
	cin>>t;
	for(i = 0; i < t; i++){
		cin>>input;
		a[input]++;
		maks = max(maks, input);
	}
	for(i = 0; i < t; i++){
		cin>>b[i];
		a[b[i]]++;
		maks = max(maks, b[i]);
	}
	
	cout<<"UNION = ";
	for(i = 0; i < maks; i++){
		if(a[i] != 0)
			cout<<i<<" ";			
	}
	cout<<endl<<"INTERSECTION = ";
	for(i = 0; i < maks; i++){
		if(a[b[i]] > 1)
			cout<<b[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
