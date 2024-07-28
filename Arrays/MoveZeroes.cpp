class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v,v1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                v.push_back(nums[i]);
            }
            else{
                v1.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0;i<v1.size();i++){
            nums.push_back(v1[i]);
        }
        for(int i=0;i<v.size();i++){
            nums.push_back(v[i]);
        }
    }
};