class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = INT_MIN;
        int sum = 0;
        int n = accounts.size();
        int m = accounts[0].size();
        for(int i = 0 ;i<n;i++){
            sum = 0;
            for(int j = 0;j < m;j++){
            sum += accounts[i][j];

            }
            max = sum>max?sum:max;
        }
    return max;    
    }
};
