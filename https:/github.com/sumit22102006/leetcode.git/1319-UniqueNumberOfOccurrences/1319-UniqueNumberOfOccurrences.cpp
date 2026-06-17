// Last updated: 17/06/2026, 09:11:00
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int ,int>freq;

        for(int value: arr){
            freq[value]++;
        }
        // unique element 

        unordered_set<int>count;
        for(auto& it: freq){
            count.insert(it.second);
        }

        return freq.size()==count.size();
    }
};