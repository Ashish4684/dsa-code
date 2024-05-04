   int n = nums.size();
        int ans[n];
        int p = 0;
        int ne = 1;
        vector <int> anss;

        for(int i = 0;i<n;i++){
            if(nums[i]>=0){
                ans[p]=nums[i];
                p = p + 2;
            }else{
                ans[ne]=nums[i];
                ne = ne + 2;
            }

        }
         for(int i = 0;i<n;i++){
            anss.push_back(ans[i]);
         }
        
     return anss;   
