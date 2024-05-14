class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int maxm = 0;
        int depth = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '('){
                depth++;
                maxm = max(maxm , depth);
            }
            else if(s[i] == ')'){
                depth--;
            }

        }
     return maxm;   
    }
};
