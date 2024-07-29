
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,k=0,a=0;
        while(i<j){
            if(height[i]<height[j]){
                k=height[i]*(j-i);
                i++;
            }
            else{
                k=height[j]*(j-i);
                j--;
            }
            if(a<k){
                a=k;
            }
        }
        return a;
    }
};