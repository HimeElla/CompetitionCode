/*
Make a function to insert items in an array and another function to 
remove all repeated items from an array and display the array
Next, Gen, Next, Coder -> Next, Gen, Coder
*/
#include <bits/stdc++.h>
using namespace std;
vector <string> s;

void printArray(string str[], int n){
	for(int i = 0; i < n; i++){
		cout<<"'"<<str[i]<<"'";
		if(i < n-1){
			cout<<", ";
		}
	}	
}

void printVector(){
	for(int i = 0; i <= s.size()-1; i++){
		cout<<"'"<<s[i]<<"'";
		if(i != s.size()-1){
			cout<<", ";
		}
	}	
}

int main(){
//	string str[4] = {"Next", "Gen", "Next", "Coder"};
	
	int n;	cin>>n;
	
	//Input Using Array
//	string str, s[n];
//	int k = 0, cek = 0;
//	for(int i = 0; i < n; i++){
//		cin>>str;
//		if(i == 0){
//			s[k] = str;
//			continue;
//		}
//		for(int j = 0; j <= k; j++){
//			if(str == s[j]){
//				cek = 1;
//				break;
//			}
//		}
//		if(cek != 1){
//			s[k] = str;
//		}
//		k++;
//	}
	
	//Input Using Vector
	string str;
	for(int i = 0; i < n; i++){
		int cek = 0;
		cin>>str;
		if(i == 0){
			s.push_back(str);
			continue;
		}
		for(int j = 0; j <= s.size()-1; j++){
			if(str == s[j]){
				cek = 1;
				break;
			}
		}
		if(cek != 1){
			s.push_back(str);
		}
	}
	
	printf("[");
//	printArray(s, k);
	printVector();
	cout<<"]"<<endl;
	
	return 0;
}
