class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j=0;
        while(i<chars.size()){
            int counter=0;
            chars[j]=chars[i];
            while(i<chars.size() && chars[i]==chars[j]){
                counter++;
                i++;
            }
            if(counter==1)
                j++;
            else{
                string str=to_string(counter);
                for(auto x:str){
                    chars[++j]=x;
                }
                j++;
            }
        }
        return j;
    }
};
