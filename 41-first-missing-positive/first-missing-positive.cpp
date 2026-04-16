class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int l = nums.size();

        for(int i=0;i<l;i++){
            while(nums[i]>=1 && nums[i]<=l && nums[nums[i] - 1] != nums[i]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }

        for (int i = 0; i < l; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return l+1;
    }
};