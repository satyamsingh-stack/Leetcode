#include<bits/stdc++.h>
using namespace std;
void solution(string input,string output){
	if(input.empty()){
		cout<<output<<" ";
		return ;
	}
	solution(input.substr(1),output+input[0]);
	solution(input.substr(1),output);
}
int main(){
	string input;
	string output;
	cin>>input;
	solution(input,output);
	return 0;
}
