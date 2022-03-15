#include<iostream>
using namespace std;
int concatnation(int *arr1,int *arr2,int *arr3,int n){
	for(int i=0;i<n;i++){
		arr3[i]=arr1[i];
		arr3[2*n-(n-i)]=arr2[i];
	}
}
int main(){
	int n;
	cin>>n;
	int arr1[n],arr2[n],arr3[n+n];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int i=0;i<n;i++)
		cin>>arr2[i];
	concatnation(arr1,arr2,arr3,n);
	for(int i=0;i<n+n;i++)
		cout<<arr3[i]<<" ";
	return 0;
}
