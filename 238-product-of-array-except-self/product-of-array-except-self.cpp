class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            vector <int> result(nums.size(), 1);

            result[0]=1;
            for(int i=1;i<=size(nums)-1;i++){
                result[i] = result[i-1]*nums[i-1];
            }

            int sufix_product = 1;
            for(int i=size(nums)-1;i>=0;i--){
                result[i] = result[i]*sufix_product;
                sufix_product  = sufix_product*nums[i];
            }

        return result;
    }
};