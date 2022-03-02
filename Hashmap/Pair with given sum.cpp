#include<bits/stdc++.h>
using namespace std;
bool sumarray(int *arr,int n,int k){
	unordered_set<int> st;
	for(int i=0;i<n;i++){
		if(st.find(k-arr[i])!=st.end())
			return true;
		else
			st.insert(arr[i]);
	}
	return false;
}
int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>k;
	cout<<sumarray(arr,n,k);
	return 0;
}
