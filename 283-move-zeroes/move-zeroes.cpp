class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> non_z;
        int l = nums.size();
        int ind = 0;

        for(int i = 0; i < l; i++){
            if(nums[i] != 0)
                non_z.push(nums[i]);
            nums[i] = 0;
        }

        int idx = 0;
        while(!non_z.empty()){
            nums[idx++] = non_z.front();
            non_z.pop();
        }
    }
};