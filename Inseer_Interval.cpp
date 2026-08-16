class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int Aptr=0;
        int Bptr=0;
        int sizeA= firstList.size();
        int sizeB= secondList.size();
        vector<int> temp(2);

        while(Aptr<sizeA && Bptr<sizeB){
            if(firstList[Aptr][1] >= secondList[Bptr][0] && secondList[Bptr][1]>= firstList[Aptr][0]){
                temp[0]= max(firstList[Aptr][0], secondList[Bptr][0]);
                temp[1]= min(firstList[Aptr][1], secondList[Bptr][1]);
                res.push_back(temp);
            }
            if(firstList[Aptr][1] > secondList[Bptr][1]){
                Bptr++;
            }
            else Aptr++;
        }
        return res;
    }
};