class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(nums.size()!=s.size()) return true;
        else return false;
    }
};











// map<int, int> mpp;
//         for(auto it:nums){
//             mpp[it]++;
//         }
//         for(auto it:mpp){
//             if(it.second>1){
//                 return true;
//             }
//         }
//         return false;