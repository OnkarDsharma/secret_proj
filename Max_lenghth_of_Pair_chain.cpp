class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });

        int ans=0;
        int current_end= INT_MIN;
        for(int i=0;i<pairs.size();i++){
            if(pairs[i][0]>current_end){
                ans++;
                current_end=pairs[i][1];
            }
        }
        return ans;
    }
};