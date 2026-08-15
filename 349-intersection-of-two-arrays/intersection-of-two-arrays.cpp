class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> unique;
        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {

                if(nums1[i] == nums2[j]) {
                    unique.push_back(nums1[i]);
                    break;
                }
            }
        }

        sort(unique.begin(), unique.end());

        if(unique.size() > 0) {

            ans.push_back(unique[0]);

            for(int i = 1; i < unique.size(); i++) {
                if(unique[i] != unique[i-1]) {
                    ans.push_back(unique[i]);
                }
            }
        }

        return ans;
    }
};