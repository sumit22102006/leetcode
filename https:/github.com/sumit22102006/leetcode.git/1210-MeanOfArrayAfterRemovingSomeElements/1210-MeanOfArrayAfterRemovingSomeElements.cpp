// Last updated: 18/08/2026, 14:40:14
class Solution {
public:
    double trimMean(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        int remove = arr.size() * 0.05;

        
        arr.erase(arr.begin(), arr.begin() + remove);

       
        arr.erase(arr.end() - remove, arr.end());

        int sum = 0;

        for (int ch : arr) {
            sum += ch;
        }

        double avg = (double)sum / arr.size();

        return avg;
    }
};