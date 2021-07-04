#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n, i, j;
	string input1, input2;
	
	cin>>input1>>input2;
	if(input1.size() != input2.size()){
		cout<<"Not Anagram"<<endl;
		return 0;
	}
	sort(input1.begin(), input1.end());
	sort(input2.begin(), input2.end());
	for(i = 0; i < input1.size(); i++){
		if(input1[i] != input2[i]){
			cout<<"Not Anagram"<<endl;
			return 0;
		}
	}
	cout<<"Anagram"<<endl;

	return 0;
}

