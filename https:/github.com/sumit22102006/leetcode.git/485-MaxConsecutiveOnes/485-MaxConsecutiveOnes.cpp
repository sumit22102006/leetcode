// Last updated: 24/06/2026, 08:37:56
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int count = 0;
        for(int ch : nums){
            if(ch== 0){
              count=0;
             
             
            }
            else{
                count ++;
                maxcount = max(maxcount , count);
            }
        }
        return maxcount;
    }
};