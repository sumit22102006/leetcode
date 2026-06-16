// Last updated: 16/06/2026, 13:04:02
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