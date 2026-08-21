class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max= INT_MIN;
        int max2= INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]> max){
                max2 =max;
                max= nums[i];
            }
            else if(nums[i]>=max2 && nums[i]<=max) max2= nums[i]; 
        }
        int ans= (max -1)*(max2-1);
        return ans;
    }
};