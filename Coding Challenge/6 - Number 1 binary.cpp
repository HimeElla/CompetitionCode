/*
Take integer value as an input and display the number of 1's in the
binary of that number as output
124 (i.e. 1111100) -> No. Of 1's = 5
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, temp = 0;
	
	cin>>n;
	while(n != 0){
		if(n%2 == 1){
			temp++;
		}
		n/=2;
	}
	cout<<"No. Of 1's = "<<temp<<endl;
	
	return 0;
}
