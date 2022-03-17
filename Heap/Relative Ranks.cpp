class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        priority_queue<pair<int,int>> rank;
        for(int i=0;i<nums.size();i++)
            rank.push(make_pair(nums[i],i));
        vector<string> res(nums.size(),"");
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(count==1){
                res[rank.top().second]="Gold Medal";
                count++;
            }
            else if(count==2){
                res[rank.top().second]="Silver Medal";
                count++;
            }
            else if(count==3){
                res[rank.top().second]="Bronze Medal";
                count++;
            }
            else{
                res[rank.top().second]=to_string(count);
                count++;
            }
            rank.pop();
        }
        return res;
    }
};
