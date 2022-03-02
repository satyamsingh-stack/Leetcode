#include<bits/stdc++.h>
using namespace std;
bool subarraywithgivensum(int *arr,int n,int s){
	unordered_set<int> m;
	int pre_sum=0;
	for(int i=0;i<n;i++){
		pre_sum+=arr[i];
		if(m.find(pre_sum-s)!=m.end())
			return true;
		else
			m.insert(pre_sum);
	}
	return false;
}
int main(){
	int n,s;
	cin>>n>>s;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<subarraywithgivensum(arr,n,s);
	return 0;
}
