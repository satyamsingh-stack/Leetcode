#include<bits/stdc++.h>
using namespace std;
void frequency(int *arr,int n){
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(auto x:m){
		cout<<x.first<<" "<<x.second<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	frequency(arr,n);
	return 0;
}
