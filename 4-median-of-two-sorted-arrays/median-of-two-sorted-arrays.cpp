class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size(); int n= nums2.size();
        for(int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int k= nums1.size();
        if(k%2==0){
            return( ((nums1[k/2])+(nums1[(k/2)-1]))/2.0);
        }
        else{
            return (nums1[(k/2)]);
        }
        return 0;
           
    }
};