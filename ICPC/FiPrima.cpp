#include <bits/stdc++.h>
using namespace std;
vector <int> prime;
void Prima(){
	for(int i = 1; i <= 100; i++){
		int cek = 0;
		for(int j = 2; j <= i/2; j++){
			if(i % j == 0){
				cek++;
				break;
			}
		}
		if(cek == 0 && i != 1){
			prime.push_back(i);
		}
	}
}

int main(){
	Prima();
	int n, x;
	
	cin>>n;
	for(int i = 0; i < n; i++){
		int sum = 0;
		cin>>x;
		for(int j = 0; j < x; j++){
			sum += prime[j];
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
