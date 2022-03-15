#include<iostream>
using namespace std;
void extra_candies(int *arr,int n,int extra){
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<max<<endl;
	for(int i=0;i<n;i++){
		if(arr[i]+extra>=max)
			cout<<"true"<<" ";
		else if(arr[i]+extra<max)
			cout<<"false"<<" ";
	}
}
//vector<bool> candies(vector<int> &arr,int extra){
//	vector<bool> result;
//	int max=arr[0];
//	for(int i=0;i<arr.size();i++){
//		if(arr[i]>max)
//			max=arr[i];
//	}
//	for(int i=0;i<arr.size();i++){
//		if(arr[i]+extra>=max)
//			result.push_back(true);
//		else
//			result.push_back(false);
//	}
//	return result;
//}
int main(){
	int n,extra;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>extra;
	extra_candies(arr,n,extra);
	return 0;
}
