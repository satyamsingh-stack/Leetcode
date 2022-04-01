class Solution {
public:
    void reverseString(vector<char>& s) {
        int beg=0;
        int end=s.size()-1;
        while(beg<end){
            s[beg]=(s[beg]^s[end])^(s[end]=s[beg]);
            beg++;
            end--;
        }
    }
};
