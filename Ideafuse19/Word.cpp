#include <bits/stdc++.h>
using namespace std;
char v[5] = {'a', 'i', 'u', 'e', 'o'};
int cek = 0, stt = 0, temp = 0, tp = 0;

void upper(string a, int n, int m){
	for(int i = n; i <= m; i++){
		a[i] += 'A' - 'a';
		cout<<a[i];
	}
}

int main(){
	int n;
	string a;
	
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a;
		printf("Case #%d: ", i+1);
		for(int i = 0; i < a.size(); i++){
			if(a[i] == 'a' || a[i] == 'i' || a[i] == 'u' || a[i] == 'e' || a[i] == 'o'){
				cek++;
				cout<<cek<<endl;
			}
			else{
				stt++;
			}
			if(cek > 1 && stt == 0){
				upper(a, i-cek, cek);
				cout<<cek<<endl;
				cek = stt = 0;
			}
			else if(stt > 1 && stt == 0){
				upper(a, i-stt, stt);
				cout<<stt<<endl;
				cek = stt = 0;
			}
			else{
				cout<<a[i];
				cek = stt = 0;
			}
		}
//		cout<<a<<endl;
	}
}
