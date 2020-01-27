/*
Create a menu driven program which will accept two matrix of 3x3
(Row x Column) and perform arithmetic operations depending on user
input
*/

#include <bits/stdc++.h>
using namespace std;
void print(int n[1001][1001]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<n[i][j];
			if(j < 2){
				cout<<"x";
			}
		}
		cout<<endl;
	}	
}

void add(int n[1001][1001], int m[1001][1001]){
	int c[1001][1001];
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			c[i][j] = n[i][j] + m[i][j];
		}
	}
	print(c);
}

void subs(int n[1001][1001], int m[1001][1001]){
	int c[1001][1001];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			c[i][j] = n[i][j] - m[i][j];
		}
	}
	print(c);
}

void multi(int n[1001][1001], int m[1001][1001]){
	int c[1001][1001];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			c[i][j] = n[i][j] - m[i][j];
		}
	}
	print(c);
}

int main(){
	int n[1001][1001], m[1001][1001];
	int menu;
	
	cout<<"First Matrix:"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin>>n[i][j];
		}
	}
//	cout<<endl<<"Second Matrix:"<<endl;
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j < 3; j++){
//			cin>>m[i][j];
//		}
//	}
//	
//	printf("Operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n0. Exit\n");
//	do{ 
//		cin>>menu;
//		switch(menu){
//			case 1:
//				cout<<"Addition Operation:"<<endl;
////				add(n, m);
//				break;
//			case 2:
//				cout<<"Subtraction Operation:"<<endl;
////				subs(n, m);
//				break;
//			case 3:
//				cout<<"Multiplication Operation:"<<endl;
////				multi(n, m);
//				break;
//		}
//		
//	}while(menu != 0);
	
	return 0;
}
