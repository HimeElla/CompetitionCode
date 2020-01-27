#include <bits/stdc++.h>
using namespace std;
vector <long long int> Bin;
int nol = 0, one = 0;
void Biner(long long int num){
	if(num != 0){
		Bin.push_back(num%2);
		if(Bin.size()<=16){
			if(num%2 == 0){
				nol++;
			}else{
				one++;
			}
		}
		Biner(num /= 2);
	}
}

int main(){
	long long int num, i = 0;

	cin>>num;
	Biner(num);
	if(Bin.size()<16){
		printf("0 = %d\n1 = %d\n", nol+(16-Bin.size()), one);
	}else{
		printf("0 = %d\n1 = %d\n", nol, one);		
	}
	
	return 0;
}
