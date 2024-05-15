class Solution {
public:
    int search(vector<int>& nums, int target) {
         int n = nums.size();
        int first = 0;
        int end = n-1;
     

        while(first<=end){
            int mid = (first + end)/2;
            if(nums[mid] == target){
                return mid;

            }
           else if(nums[mid]>target){
             end = mid - 1;
            }
            else if(nums[mid]<target){
                first = mid +1;
            }}
        return -1;
        
    }
}
