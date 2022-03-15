#include<iostream>
using namespace std;
int solve(int *arr,int *ans,int n){
	for(int i=0;i<n;i++){
		ans[i]=arr[arr[i]];
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n],ans[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	solve(arr,ans,n);
	for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";
	return 0;
}
