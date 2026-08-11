class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int max = -1;
        int j = 0;
        for(int i=0; i<n; i++){
            j = i+1;
            while(j<n){
                if(nums[i]>nums[j]){
                    max = nums[i];
                    nums[i] = nums[j];
                    nums[j] = max;
                    j++;
                }
                else j++;
            }
        }
    }
};