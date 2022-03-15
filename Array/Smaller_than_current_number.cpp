#include<iostream>
using namespace std;
int smaller(int *arr,int *arr1,int n){
	int res;
	for(int i=0;i<n;i++){
		res=0;
		for(int j=0;j<n;j++){
			if(arr[i]>arr[j])
				res++;
		}
		arr1[i]=res;
	}
}
//vector<int>smallerNumbersThanCurrent(vector<int>& nums){
//        int res;
//        vector<int> result;
//        for(int i=0;i<nums.size();i++){
//            res=0;
//            for(int j=0;j<nums.size();j++){
//                if(nums[i]>nums[j])
//                    res++;
//            }
//            result.push_back(res);
//        }
//        return result;
//}
int main(){
	int n;
	cin>>n;
	int arr[n],arr1[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	smaller(arr,arr1,n);
	for(int i=0;i<n;i++)
		cout<<arr1[i]<<" ";
	return 0;
}
