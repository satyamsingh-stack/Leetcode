#include<bits/stdc++.h>
using namespace std;
bool with0sum(int *arr,int n){
	unordered_set<int> s;
	int pairsum=0;
	for(int i=0;i<n;i++){
		pairsum+=arr[i];
		if(s.find(pairsum)!=s.end())
			return true;
		if(pairsum==0)
			return true;
		else
			s.insert(pairsum);
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<with0sum(arr,n);
	return 0;
}
