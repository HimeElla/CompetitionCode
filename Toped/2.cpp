#include <bits/stdc++.h>
using namespace std;
int candles(int a, int b){
	int temp = a, stt = a - b;
	if(a < b)
		return a;
	
	while(stt+1 >= b){
		temp++;
		stt -= (b-1);
	}
	return temp+1;
}

int candled(int a, int b){
	int temp, cek, stt;
	stt = temp = a;
	
	while(stt >= b){
		cek = (stt % b);
		stt /= b;
		temp += stt;
		stt += cek;
	}
	return temp;
}

int main(){
	int a, b;
	
	cout<<"a: "; cin>>a;
	cout<<"b: "; cin>>b;
	cout<<"s: "<<candles(a, b)<<endl;
	cout<<"d: "<<candled(a, b)<<endl;
	
	return 0;
}
