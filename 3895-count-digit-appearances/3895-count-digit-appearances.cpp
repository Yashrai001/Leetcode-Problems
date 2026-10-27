class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0;i<nums.size();i++){
           int t=nums[i];
           while(t>0){
            int n=t%10;
            if(n==digit){
                count++;
            }
            t=t/10;
           }

        }
        return count;
    }
};