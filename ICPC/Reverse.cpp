#include <bits/stdc++.h>
using namespace std;
string fin;
vector <string> temp;
int j = 0;
void reverse(int begin, int end){
	for(int i = end; i >= begin; i--){
		fin[j] = temp[i];
		j++;
	}
}
int main(){	
	string s; 
	
	cin>>s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '%' && s[i+1] == 3){
			temp.push_back(s[i]);
			i += 2;
		}
		else if(s[i] == '%' && s[i+1] == 2){
			if(s[i+2] == 'C'){
				temp.push_back(',');
			}
			else if(s[i+2] == 2){
				temp.push_back('"');
			}
			else if(s[i+2] == 7){
				temp.push_back(char(39));
			}
			else if(s[i+2] == 1){
				temp.push_back('!');
			}
			else if(s[i+2] == 8){
				temp.push_back('(');
			}
			else if(s[i+2] == 9){
				temp.push_back(')');
			}
			i += 2;
		}
		else{
			temp.push_back(s[i]);
		}
		j++;
	}

	for(int i = 0; i < temp.size(); i++){
		if(temp[i] == '('){
			size_t found = temp.find(')');
			reverse(i, found);
			i += found + 1;
		}
		fin[j] = temp[i];
		j++;
	}
	cout<<fin<<endl;
	return 0;
}
