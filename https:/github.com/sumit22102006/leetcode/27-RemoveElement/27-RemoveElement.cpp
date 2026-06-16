// Last updated: 16/06/2026, 13:04:10
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int k =0  ;

        for(int i =0 ;  i < nums.size(); i++){
            if(nums[i]!=val){
             nums[k]=nums[i];
             k++;  

            }




        }
        return k;
        
    }
};