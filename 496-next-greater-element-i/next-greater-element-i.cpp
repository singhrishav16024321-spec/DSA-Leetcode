
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> rindex;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(nums1[i] == nums2[j]) {
                    rindex.push_back(j);
                    break;
                }
            }
        }

        vector<int> ans;

        for(int i = 0; i < rindex.size(); i++) {
            int ctr = -1;

            for(int j = rindex[i] + 1; j < m; j++) {
                if(nums2[j] > nums2[rindex[i]]) {
                    ctr = nums2[j];
                    break;
                }
            }

            ans.push_back(ctr);
        }

        return ans;
    }
};
