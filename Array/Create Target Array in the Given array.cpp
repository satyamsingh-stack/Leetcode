#include<bits/stdc++.h>
using namespace std;
vector<int> encoded(int *nums,int *index,int n){
	vector<int> v;
	for(int i=0;i<n;i++){
		v.insert(v.begin()+index[i],nums[i]);
	}
	return v;
}
int main(){
	int n;
	cin>>n;
	int nums[n],index[n];
	for(int i=0;i<n;i++)
		cin>>nums[i];
	for(int i=0;i<n;i++)
		cin>>index[i];
	vector<int> ans;
	ans=encoded(nums,index,n);
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	return 0;
}
