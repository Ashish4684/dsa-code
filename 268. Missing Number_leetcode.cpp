class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int val = 0;
        int sum = 0;
        for(int i = 0; i<n;i++){
            sum += nums[i];

        }
         for(int i = 1; i<=n;i++){
            val += i;

        }
        
        
        return val - sum;
    }
};
