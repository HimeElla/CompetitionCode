/*
Create a menu driven program which will accept two matrix of 3x3
(Row x Column) and perform arithmetic operations depending on user
input
*/

#include <bits/stdc++.h>
using namespace std;
vector < pair<int, int> > n;
vector < pair<int, int> > m;

void add(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<n[i][j] + m[i][j];
			if(j < 2){
				cout<<"x";
			}
		}
		cout<<endl;
	}
}

void subs(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<n[i][j] - m[i][j];
			if(j < 2){
				cout<<"x";
			}
		}
		cout<<endl;
	}
}

void multi(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
		}
	}
}

int main(){
	int menu, input;
	
	cout<<"First Matrix:"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin>>input;
			n[i].push_back(input);
		}
	}
	cout<<endl<<"Second Matrix:"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin>>input;
			m[i].push_back(input);
		}
	}
	
	printf("Operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n0. Exit\n");
	do{ 
		cin>>menu;
		switch(menu){
			case 1:
				cout<<"Addition Operation:"<<endl;
				add();
				break;
			case 2:
				cout<<"Subtraction Operation:"<<endl;
				subs();
				break;
			case 3:
				cout<<"Multiplication Operation:"<<endl;
				multi();
				break;
			case 0:
				exit;
		}
	}while(menu != 0);
	
	return 0;
}
