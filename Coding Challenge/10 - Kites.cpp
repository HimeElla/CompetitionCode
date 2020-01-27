#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k = 2;
	n = 5;
	
//	cin>>n;
	for(int j = 0; j < n-1; j++)
		cout<<"  ";
	cout<<" #"<<endl;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n-1; j++)
			cout<<"  ";
		for(int j = 1; j <= k; j++){
			cout<<"#";
			if(j < k)
				cout<<" ";
		}
		k += 2;
		cout<<endl;
	}
	k -= 2;
	for(int i = 0; i < n-1; i++){
		k -= 2;
		for(int j = i; j >= 0; j--)
			cout<<"  ";
		for(int j = 1; j <= k; j++){
			cout<<"#";
			if(j < k)
				cout<<" ";
		}
		cout<<endl;
	}
	for(int j = 0; j < n-1; j++)
		cout<<"  ";
	cout<<" #"<<endl;
	
	k = n-1;
	int cek = 0;
	for(int i = 0; i < n; i++){
		if(cek == 0){
			for(int j = 0; j < k+1; j++)
				cout<<"  ";
			cout<<"*"<<endl;
			for(int j = 0; j < k; j++)
				cout<<"  ";
			cout<<" *"<<endl;
			cek = 1;
		}
		else{
			for(int j = 0; j < k; j++)
				cout<<"  ";
			cout<<"*"<<endl;
			for(int j = 0; j < k; j++)
				cout<<"  ";
			cout<<" *"<<endl;
			cek = 0;			
		}
	}
	
	return 0;
}
