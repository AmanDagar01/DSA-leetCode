class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xorAll = 0; 
        for (int num : nums) { xorAll ^= num; } 
        
        long diff = xorAll & (-xorAll); 
        int a = 0, b = 0; 
        for (int num : nums) { 
            if (num & diff) a ^= num; 
            else b ^= num; 
        } 
            
        return {a, b};
    }
};