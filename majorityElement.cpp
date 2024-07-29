class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int mi=0;
        int k=0;
        for(auto it:m){
            int p=it.second;
            if(p > (nums.size())/2){
               return it.first;
            }
        }
        return k;
    }
};