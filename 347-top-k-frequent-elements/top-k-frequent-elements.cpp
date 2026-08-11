class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1. Count frequency
        map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        // 2. Move (number, frequency) into a vector
        vector<pair<int, int>> v;

        for (auto& [num, count] : freq) {
            v.push_back({num, count});
        }

        // 3. Sort by frequency in descending order
        sort(v.begin(), v.end(),
             [](auto& a, auto& b) {
                 return a.second > b.second;
             });

        // 4. Take first k elements
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};