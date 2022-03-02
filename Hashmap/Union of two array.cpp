#include<bits/stdc++.h>
using namespace std;
void union_array(int *arr1,int *arr2,int n,int m){
	unordered_set<int> st;
	for(int i=0;i<n;i++)
		st.insert(arr1[i]);
	for(int i=0;i<m;i++)
		st.insert(arr2[i]);
	for(auto x:st)
		cout<<x<<" ";
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int i=0;i<m;i++)
		cin>>arr2[i];
	union_array(arr1,arr2,n,m);
	return 0;
}
