class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool> answer;
        for(int i=0;i<queries.size();i++){
            int current = abs(nums[queries[i][0]] - nums[queries[i][1]]);
            if(current>maxDiff){
                int node1=min(queries[i][0],queries[i][1]) ;
                int node2=max(queries[i][0],queries[i][1]);
                bool isValid = true;
                for(int k=node1;k<node2;k++){
                    int curr= abs(nums[k]-nums[k+1]);
                    if(curr>maxDiff){
                        isValid = false;
                        break;
                    }
                }
                answer.push_back(isValid);
            }
            else answer.push_back(true);
        }
        return answer;
    }
};