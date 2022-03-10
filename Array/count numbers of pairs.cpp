#include<bits/stdc++.h>
using namespace std;
int solution(int *arr,int n,int k){
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(arr[i]-arr[j])==k)
				count++;
		}
	}
	return count;
}
int main(){
	int nums[]={1,2,2,1};
	int n=sizeof(nums)/sizeof(nums[0]);
	cout<<solution(nums,n,1);
	return 0;
}
