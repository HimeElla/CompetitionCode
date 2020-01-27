/*
Make a function to insert items in an array and another function to 
display the most repeated items from an array.
Next, Gen, Next, Gen, Coder -> Next, Gen
*/
#include <bits/stdc++.h>
using namespace std;
vector<pair <string, int> > temp;
int main(){
//	string str[5] = {"Next", "Gen", "Next", "Gen", "Coder"};
	int n;	cin>>n;
	
	//Input Using Array
	string str[n], s;
	for(int i = 0; i < n; i++){
		cin>>s;
		
	}
	
	printf("[");
	for(i = 0; i != '\0'; i++){
		printf("['%s'", str[i]);
		if(i < str.end()){
			cout<<", ";
		}
	}
	cout<<"]"<<endl;
	
	return 0;
}
