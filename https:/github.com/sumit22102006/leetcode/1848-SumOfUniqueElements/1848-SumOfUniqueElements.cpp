// Last updated: 16/06/2026, 13:03:46
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> m;

        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        int sum = 0;

        for(auto it : m) {
            if(it.second == 1) {
                sum += it.first;
            }
        }

        return sum;
    }
};