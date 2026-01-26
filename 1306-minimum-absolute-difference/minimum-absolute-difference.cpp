class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> new_arr;
        sort(arr.begin(), arr.end());
        int diff = INT_MAX;
        for(int i=0; i<arr.size()-1; i++){
            if(diff>(arr[i+1]-arr[i])){
                diff = arr[i+1] - arr[i];
            }
        }
        for(int i=0; i<arr.size()-1; i++){
            if(diff==(arr[i+1]-arr[i])){
                new_arr.push_back({arr[i], arr[i+1]});

            }
        }
        return new_arr;

    }
};