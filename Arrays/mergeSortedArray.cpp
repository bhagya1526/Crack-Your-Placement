class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v;
        for(int i=0;i<m;i++){
            v.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            v.push_back(nums2[i]);
        }
        nums1.clear();
        for(auto it:v){
            nums1.push_back(it);
        }
        sort(nums1.begin(),nums1.end());
    }
};