class Solution {
public:
    bool isPalindrome(string s) {
        string m;
         transform(s.begin(),s.end(),s.begin(),:: tolower);

        long long n=s.size();
        for(long long i=0;i<n;i++){
           
            if( isalnum(s[i])){
                m.push_back(s[i]);
            }
        }
        string t=m;
        reverse(m.begin(),m.end());
        if(m==t)
        return true;
        else 
        return false;
    }
};