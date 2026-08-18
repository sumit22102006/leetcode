// Last updated: 18/08/2026, 14:39:52
class Solution {
public:
  bool isVowel (char ch){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
                return true;
            }
            else{
                return false;
            }
        }
    int maxVowels(string s, int k) {

         int ans = INT_MIN ;
         int left = 0;
          int right = k-1 ;
          int count =0;
         
        

        for(int i=left ; i<=right ; i++){
            if(isVowel(s[i])) ++count;
        }

        ans =count; 
        ++left;
        ++right;

        while(right<s.size()){
            if(isVowel(s[left-1])) --count;

            if(isVowel(s[right])) ++count;

            ans = max(ans, count);
            ++left;
            ++right;
        }

        return ans;
    }
};