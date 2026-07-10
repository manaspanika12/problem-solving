class Solution {
public:
    void Rotate(vector<int>& nums, int L,int R){
        int l=L;
        int r=R;
       while(l<=r){
        int temp=nums[l];
        nums[l]=nums[r];
        nums[r]=temp;
        l++;
        r--;
       } 
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%nums.size();
        Rotate(nums,0,n-1);
        Rotate(nums,0,k-1);
        Rotate(nums,k,nums.size()-1);
    }
};