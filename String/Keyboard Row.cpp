class Solution {
public:
    vector<int> row{1,2,2,1,0,1,1,1,0,1,1,1,2,2,0,0,0,0,1,0,0,2,0,2,0,2};
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(auto &word:words){
            bool valid=true;
            for(int i=1;i<(int)word.size();i++){
                if(row[tolower(word[i])-'a']!=row[tolower(word[i-1])-'a'])
                {
                    valid=false;
                    break;
                }
            }
            if(valid)
                ans.push_back(word);
        }
        return ans;
    }
};
