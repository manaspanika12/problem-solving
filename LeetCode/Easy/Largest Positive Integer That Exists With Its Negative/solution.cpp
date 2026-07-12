class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max=INT_MIN;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==-1*nums[j]){
                if(nums[i]>max||nums[j]>max){
                    if(nums[i]>0)
                    {
                        max = nums[i];
                    }
                    else{
                        max=nums[j];
                    }
                }
                
            }
        }
    }
    if(max!=INT_MIN){
        return max;
    }
    else{
        return -1;
    }
    }
};