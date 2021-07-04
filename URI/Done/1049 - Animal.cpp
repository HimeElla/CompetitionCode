#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	string a, b, c;
	
	cin>>a>>b>>c;
	
	if (a.compare("vertebrado") == 0){
		if (b.compare("ave") == 0) {
			if (c.compare("carnivoro") == 0)
				cout<<"aguia"<<endl;
			else if (c.compare("onivoro") == 0)
				cout<<"pomba"<<endl;
		} else if (b.compare("mamifero") == 0) {
			if (c.compare("onivoro") == 0)
				cout<<"homem"<<endl;
			else if (c.compare("herbivoro") == 0)
				cout<<"vaca"<<endl;
		}
	} else if (a.compare("invertebrado") == 0) {
		if (b.compare("inseto") == 0){
			if (c.compare("hematofago") == 0)
				cout<<"pulga"<<endl;
			else if (c.compare("herbivoro") == 0)
				cout<<"lagarta"<<endl;
		} else if (b.compare("anelideo") == 0) {
			if (c.compare("hematofago") == 0)
				cout<<"sanguessuga"<<endl;
			else if (c.compare("onivoro") == 0)
				cout<<"minhoca"<<endl;
		}
	}

	return 0;
}
