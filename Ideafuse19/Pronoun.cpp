#include <bits/stdc++.h>
using namespace std;
char v[5] = {'a', 'i', 'u', 'e', 'o'};
int cek = 0, stt = 0, temp = 0, tp = 0;
string a;

void upper(string a){
	size_t t = a.find("ng");
	for(int i = 0; i < a.size(); i++){
		for(int j = 0; j < 22; j++){
			if(t != string::npos){
				tp = 1;
				i++;
			}
			else if(a[i] == v[j]){
				stt++;
			}
			else{
				cek++;
			}
		}
		if(cek >= 2 && i-temp == 1){
			a[i] += 'A' - 'a';
			a[temp] += 'A' - 'a';
			cout<<a[temp]<<a[i]<<endl;
			cek = stt = tp = temp = 0;
		}
		else if(stt >= 2 && i-temp == 1){
			a[i] += 'A' - 'a';
			a[temp] += 'A' - 'a';
			cout<<a[temp]<<a[i]<<endl;
			cek = stt = tp = temp = 0;			
		}
		temp = i;
	}
//	cout<<endl;
}

int main(){
	int n;
	
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a;
		cout<<"Case #"<<i+1<<": ";
		upper(a);
		cout<<a<<endl;
	}
}
