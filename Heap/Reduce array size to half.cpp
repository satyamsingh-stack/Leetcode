#include<bits/stdc++.h>
using namespace std;
int solution(int *arr,int n){
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
		mp[arr[i]]++;
	multiset<int,greater<int>> s;
	for(auto x:mp)
		s.insert(x.second);
	int count=0,ans=0;
	for(auto it=s.begin();count*2<n;it++){
		ans++;
		count=count+*it;
	}
	return ans;
}
int main(){
	int arr[]={3,3,3,3,5,5,5,2,2,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<solution(arr,n);
	return 0;
}
