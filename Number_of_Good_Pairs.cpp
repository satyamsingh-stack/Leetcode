#include<iostream>
using namespace std;
int good_pairs(int *arr,int n){
	int res=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j])
				res++;
		}
	}
	return res;
}
//int numIdenticalPairs(vector<int>& nums) {
//        int res=0;
//        for(int i=0;i<nums.size();i++){
//            for(int j=i+1;j<nums.size();j++){
//                if(nums[i]==nums[j])
//                    res++;
//            }
//        }
//        return res;
//}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<good_pairs(arr,n);
	return 0;
}
