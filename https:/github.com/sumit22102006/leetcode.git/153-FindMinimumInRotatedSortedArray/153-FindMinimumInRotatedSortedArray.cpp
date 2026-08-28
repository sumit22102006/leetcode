// Last updated: 28/08/2026, 23:28:36
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) {
            
                left = mid + 1;
            }
            else {
              
                right = mid;
            }
        }

        return nums[left];
    }
};