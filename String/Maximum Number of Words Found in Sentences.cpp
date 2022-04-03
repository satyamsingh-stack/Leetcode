class Solution {
public:
    int mostWordsFound(vector<string>& sentence) {
        int counter,ans=0;
        int l=sentence.size();
        for(int i=0;i<l;i++){
            int k=sentence[i].size();
            counter=1;
            for(int j=0;j<k;j++){
                if(sentence[i][j]==' ')
                    counter++;
            }
            ans=max(ans,counter);
        }
        return ans;
    }
};
