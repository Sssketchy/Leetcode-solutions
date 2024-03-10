class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        unordered_set <int> set;
        unordered_set <int> hashset;
        vector<int> sett;
        int p1 = 0;
        int p2 = 0;
        for(auto x:nums1){
            set.insert(x);
        }
        for(auto y:nums2){
            if(set.contains(y)&&hashset.contains(y)!=true){
                hashset.insert(y);
            }
        }
        for(auto z:hashset){
            sett.push_back(z);
        }
        return sett;
        
    }
};