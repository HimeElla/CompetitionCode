#include <bits/stdc++.h>
using namespace std;
vector <int> s;
int revisited(int n, int a, int b, int j){
	int temp = 0, stt = 0;
	
	for(int i = j; i < INT_MAX; i++){
		if(i%a == 0 || i%b == 0){
			temp = i;
			stt++;
		}
		if(stt == n)	return temp;
	}
}
int main(){
	int n, a, b;
	
	cin>>n>>a>>b;
	if(a < b)
		cout<<revisited(n,a,b,a)<<endl;
	else
		cout<<revisited(n,a,b,b)<<endl;
	
	return 0;
}
