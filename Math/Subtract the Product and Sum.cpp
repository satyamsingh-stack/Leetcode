class Solution {
public:
    int product(int n){
        int r,p=1;
        while(n){
            r=n%10;
            p=p*r;
            n=n/10;
        }
        return p;
    }
    int sum_d(int n){
        int r,s=0;
        while(n){
            r=n%10;
            s=s+r;
            n=n/10;
        }
        return s;
    }
    int subtractProductAndSum(int n) {
        int k=product(n)-sum_d(n);
        return k;
    }
};
