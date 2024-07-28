#include<bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        nums.clear();
        for(auto it:m){
            cout<<it.first<<it.second;
            nums.push_back(it.first);
        }
        return nums.size();
    }
};