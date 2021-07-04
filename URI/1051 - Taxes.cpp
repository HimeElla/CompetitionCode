#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	float n, m;
	
	cin>>n;
	
	if (n >= 0 && n <= 2000)
		cout<<"Isento"<<endl;
	else if ( n > 2000 && n <= 3000)
		printf("R$ %.2f\n", (n-2000)*0.8);
	else if (n > 3000 && n <= 4500)
		printf("R$ %.2f\n", 80 + ((n-3000)*0.18));
	else if (n > 4500)
		printf("R$ %.2f\n", 350 + ((n-4500)*0.28));

	return 0;
}

