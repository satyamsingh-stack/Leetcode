#include<bits/stdc++.h>
using namespace std;
bool ispallindrome(string st){
	for(int i=0;i<st.length();i++){
		if(st[i]!=st[st.length()-i-1])
			return false;
	}
	return true;
}
void pallindromic_substring(string st){
	for(int i=0;i<st.length();i++){
		string ss;
		for(int j=i;j<st.length();j++){
			ss=ss+st[j];
			if(ispallindrome(ss))
				cout<<ss<<endl;
		}
	}
}
int main(){
	string st;
	cin>>st;
	pallindromic_substring(st);
	return 0;
}
