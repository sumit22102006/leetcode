// Last updated: 17/06/2026, 09:11:21
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    int j=0;
    // if(m==0 && n != 0){
    //     n = 0;
    // }

    for(int i= ((m-1) + 1); i<nums1.size(); i++){
        if(j<nums2.size()){
            nums1[i]=nums2[j];
            j++;
        }
    }
    sort(nums1.begin(),nums1.end());


     

    }
};