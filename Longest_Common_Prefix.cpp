class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans = strs[0].length();
        int size = strs.size();
        for(int i =0;i<size;i++){
            int j = 0;
            while( j<strs[i].length() && strs[0][j] == strs[i][j])
            j++;
            ans = min(ans,j);
        }

        return strs[0].substr(0,ans);
    }
};