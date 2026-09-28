class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        int n=words.size();
        for(int i=0;i<n;i++){
            string t=words[i];
            reverse(t.begin(),t.end());
                if(t==words[i]){
                    ans+=words[i];
                    break;
                }
            }
        
        return ans;
    }
};