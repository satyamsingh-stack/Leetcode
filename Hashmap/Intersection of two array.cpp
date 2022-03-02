#include<bits/stdc++.h>
using namespace std;
void intersection(int *arr1,int *arr2,int n,int m){
	unordered_set<int> st1;
	unordered_set<int> st2;
	for(int i=0;i<n;i++)
		st1.insert(arr1[i]);
	for(int i=0;i<m;i++)
		st2.insert(arr2[i]);
	for(auto x:st1){
		for(auto y:st2){
			if(x==y)
				cout<<x<<" ";
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int i=0;i<m;i++)
		cin>>arr2[i];
	intersection(arr1,arr2,n,m);	
	return 0;
}
