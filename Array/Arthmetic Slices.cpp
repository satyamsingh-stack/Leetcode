#include<bits/stdc++.h>
using namespace std;
int result(int *arr,int n){
	int ans=0,res=0;
	if(n<2)
		return 0;
	for(int i=1;i<n-1;i++){
		if(arr[i-1]-arr[i]==arr[i]-arr[i+1])
			ans++;
		else
			ans=0;
		res+=ans;
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<result(arr,n);
	return 0;
}
