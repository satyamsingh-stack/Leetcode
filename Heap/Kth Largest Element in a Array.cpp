// Given an integer array nums and an integer k, return the kth largest element in the array.

// Note that it is the kth largest element in the sorted order, not the kth distinct element.

 

// Example 1:

// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5
// Example 2:

// Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
// Output: 4


class Solution {
public:
    bool ismatching(char a,char b){
        return (a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']');
    }
    bool isValid(string s) {
        stack<int> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                stk.push(s[i]);
            else{
                if(stk.empty())
                    return false;
                else if(ismatching(stk.top(),s[i])==false)
                    return false;
                else
                    stk.pop();
            }
        }
        return stk.empty()==true;
    }
};
