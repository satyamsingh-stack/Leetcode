#include<bits/stdc++.h>
using namespace std;
int longest_subarray_with_given_sum(int *arr,int n,int k){
	unordered_map<int,int> m;
	int res=0,pre_sum=0;
	for(int i=0;i<n;i++){
		pre_sum+=arr[i];
		if(m.find(pre_sum-k)!=m.end())
			res=max(res,i-m[pre_sum-k]);
		if(m.find(pre_sum)==m.end())
			m.insert({pre_sum,i});
		if(pre_sum==k)
			res=i+1;
	}
	return k;
}
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<longest_subarray_with_given_sum(arr,n,k);
	return 0;
}
