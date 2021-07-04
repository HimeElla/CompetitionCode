#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll i, j;
	int c, r, s, n, m, total;
	c = r = s = total = 0;
	string k;
	
	cin>>n;
	for(i = 0; i < n; i++) {
		cin>>m>>k;
		if(k == "C")
			c += m;
		else if (k == "R")
			r += m;
		else if (k == "S")
			s += m;
		total += m;
	}
	
	float c1 = ((float)c)/total;
	float r1 = ((float)r)/total;
	float s1 = ((float)s)/total;
	
	printf("Total: %d cobaias\n", total);
	cout<<"Total de coelhos: "<<c<<endl;
	cout<<"Total de ratos: "<<r<<endl;
	cout<<"Total de sapos: "<<s<<endl;
	printf("Percentual de coelhos: %.2f %\n", c1*100);
	printf("Percentual de ratos: %.2f %\n", r1*100);
	printf("Percentual de sapos: %.2f %\n", s1*100);
	
	return 0;
}

