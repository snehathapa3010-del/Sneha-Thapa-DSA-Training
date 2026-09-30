class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>h;
        for(int i:nums){
            h[i]++;
        }
       for (auto j: h){
            if(j.second>=2)return true;
        } 
        return false;
    }
};