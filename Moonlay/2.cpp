#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n, i, j, temp, sum, stt, cek;
	
	cin>>n;
	temp = n;
	sum = cek = 0;
	
	while(temp != 0){
		stt = temp % 10;
		sum += pow(stt, 3);
		temp /= 10;
		cek++;
	}

	if(sum !=n)
		cout<<"Not Armstrong, ";
	else
		cout<<"Armstrong, ";
	
	if(cek == 3)
		cout<<"equal to 3 digits"<<endl;
	else if(cek > 3)
		cout<<"more than 3 digits"<<endl;
	else
		cout<<"less than 3 digits"<<endl;

	return 0;
}

