class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(nums[i][j]==0){
                    for(int k=0;k<nums[0].size();k++){
                        if(nums[i][k]!=0)
                        nums[i][k]=-10;
                    }
                    for(int k=0;k<nums.size();k++){
                        if(nums[k][j]!=0)
                        nums[k][j]=-10;
                    }
                    
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                if(nums[i][j]==-10){
                    nums[i][j]=0;
                }
            }
        }
    }
};