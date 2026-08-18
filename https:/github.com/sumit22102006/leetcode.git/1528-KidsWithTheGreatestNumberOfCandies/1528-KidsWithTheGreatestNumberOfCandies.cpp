// Last updated: 18/08/2026, 14:39:56
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> v;

        int maxi = *max_element(candies.begin(), candies.end());

        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= maxi) {
                v.push_back(true);
            }
            else {
                v.push_back(false);
            }
        }

        return v;
    }
};