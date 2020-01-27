#include <bits/stdc++.h>
 #define e erase
 #define PB push_back
 #define elif else if
 #define forn(i, n) for(lli i = 0; i < n; i++)
 #define MP make_pair
 using namespace std;
 	
 typedef long long int lli;
 typedef long int li;
 typedef vector <int> vi;
 typedef vector <long long lli> vii;
 	

 lli sumOfDigitsFrom1ToN(lli n);

 int main(){
 	
 	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

    lli n, l, r;
    lli sum = 0, max = -1, min = 10000000000;

    cin>>n;
    lli temp = n;
    while(n--){
        cin>>l>>r;
        if(n == temp-1){
            for(lli i = l; i <= r; i++){
                sum+=i;
            }
        }
        else if(n < temp - 1){
            if(r > max && l > max){
                for(lli i = l; i <= r; i++){
                    sum+=i;
                }
            }
            else if(l < min && r < min){
                for(lli i = l; i <= r; i++){
                    sum+=i;
                }
            }
            else if(l < min && r >= min && r <= max){
                for(lli i = l; i < min; i++){
                    sum+=i;
                }
            }
            else if(l <= max && r > max && l >= min){
                for(lli i = max+1; i <= r; i++){
                   sum+=i;
                }
            }
            else{
                for(lli i = l; i < min; i++){
                    sum+=i;
                }
                for(lli i = max+1 ; i <= r; i++){
                    sum+=i;
                }
            }
        }
        if(r > max){
            max = r;
        }
        if(l < min){
            min = l;
        }
    }

    cout<<sum<<endl;
 	return 0;
 } 
