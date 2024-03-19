class Solution {
    public int[] getConcatenation(int[] nums) {
        int a = 2*nums.length; 
        int[] ans;
        ans = new int[a];
    for(int i =0; i<nums.length;i++){
        ans[i]= nums[i];
    ans[nums.length+i]=nums[i];
    
    }
    return ans;
        
    }
}
