class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int i=0,j=nums.size()-1;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                // cout<<nums[i]<<" "<<nums[j]<<endl;
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        v.push_back(0);
        return v;
    }
};