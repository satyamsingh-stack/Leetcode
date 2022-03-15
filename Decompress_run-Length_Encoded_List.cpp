#include<iostream>
#include<vector>
using namespace std;
vector<int> solve(int *arr,int n,vector<int> res){
	for(int i=0;i<n;i=i+2){
		while(arr[i]--)
			res.push_back(arr[i+1]);
	}
	return res;
}
int main(){
//	int n;
//	cin>>n;
//	int arr[n];
//	vector<int> res;
//	for(int i=0;i<n;i++)
//		cin>>arr[i];
//	int ans=solve(arr,n,res);
//	for(int i=0;i<ans;i++)
//		cout<<res[i]<<" ";
//	return 0;
}
