class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        
        while(true){
            n=numsquaresum(n);
            if(n==1)
                return true;
            if(s.find(n)!=s.end())
                return false;
            s.insert(n);
        }
    }
    int numsquaresum(int n){
        int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
};
