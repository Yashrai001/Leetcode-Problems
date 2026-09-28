class Solution {
public:
    string reversePrefix(string word, char ch) {
        int t;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                t=i;
                string n=word;
                 reverse(n.begin(),n.begin()+t+1);
                  return n;
            }
           
            
        }
        return word;
    }
};