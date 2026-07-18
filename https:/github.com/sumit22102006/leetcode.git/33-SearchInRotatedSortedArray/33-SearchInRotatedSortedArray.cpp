// Last updated: 18/07/2026, 23:47:07
class Solution {
public:
    int search(vector<int>& nums, int target) {
         
       for(int i=0 ; i<nums.size() ; i++){
        if(nums[i] ==target) return i;
       }
          return -1;
    }
};