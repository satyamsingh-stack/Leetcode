class Solution {
public:
    int gcd(int a,int b){
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    int mirrorReflection(int p, int q) {
        if(q==0)
            return 0;
        if(p/gcd(p,q)%2==0)
            return 2;
        if(q/gcd(p,q) %2!=0)
            return 1;
        return 0;      
    }
};
