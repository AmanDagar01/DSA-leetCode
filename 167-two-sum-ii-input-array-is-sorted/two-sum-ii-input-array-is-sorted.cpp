class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;

        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) {
                return {l + 1, r + 1};
            }
            else if (sum < target) l++;
            else r--;
        }
        return {};
    }
};
























// vector<int> arr;
//         map<int,int>mpp;
//         for(int i=0;i<numbers.size();i++)
//         {
//             mpp.insert({numbers[i],i});
//         }
//         for(auto it:mpp)
//         {
//             int num=target-it.first;
//             if(mpp.find(num)!=mpp.end())
//             {
//                 auto iterator=mpp.find(num);
//                 auto iterator1=mpp.find(target);
//                 if(iterator!=iterator1)
//                 return {it.second+1,iterator->second+1};
//             }
//         }
//         return {};