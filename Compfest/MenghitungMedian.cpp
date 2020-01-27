#include <bits/stdc++.h>
using namespace std;
//void BubbleSort(int *A, int N){
//	int i = 0, j = 0, tmp;
//	int sort = 0;
//	
//	for(i = 0; i < N-1; i++){
//		for(j = N-1; j > i; j--){
//			if(A[j] < A[j-1]){
//				tmp = A[j-1];
//				A[j-1] = A[j];
//				A[j] = tmp;
//				sort++;
//			}
//		}
//		if(sort > 0)	break;
//	}
//}

void median(int *n, int i){
	
		int cond = (i+1)/2, jlh = i+1;
		if(i==0)	cout<<n[0]<<endl;
		else if(jlh%2 == 0){
			float sum = n[cond] + n[cond-1];
			
			if(jlh%2 == 0)	cout<<sum/2<<endl;
			else{
				double temp = sum/2;
				cout<<fixed<<setprecision(1)<<temp<<endl;
			}
		}
		else	cout<<n[cond]<<endl;	
}

vector <int> n;
int main(){
	int t;
	int input;
//	int n[200001];
	
	cin>>t;
	for(int i = 0; i < t; i++){
		int tmp;
//		cin>>n[i];
		cin>>input;
		n.push_back(input);

		sort(n.begin(), n.end());
		
		int cond = (i+1)/2, jlh = i+1;
		if(i==0)	cout<<n[0]<<endl;
		else if(jlh%2 == 0){
			float sum = n[cond] + n[cond-1];
			
			if(jlh%2 == 0)	cout<<sum/2<<endl;
			else{
				double temp = sum/2;
				cout<<fixed<<setprecision(1)<<temp<<endl;
			}
		}
		else	cout<<n[cond]<<endl;	
	}
	
	return 0;
}
