class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0 &&  1162261467%n==0;
        
        
        // thats 3^19 = 1162261467
        // 3^20 will cross INT_MAX;
        // any power of 3 would be factor of 3^19;
    }
};
