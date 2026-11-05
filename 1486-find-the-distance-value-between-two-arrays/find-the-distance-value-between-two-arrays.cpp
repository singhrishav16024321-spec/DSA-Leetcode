class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int r_count=0;
        for(int i=0;i<arr1.size();i++){
            int count=0;
            for(int j=0; j<arr2.size();j++){
                int x=abs(arr1[i]-arr2[j]);
                if(x>d){
                    count++;
                }
            }
            if(count==arr2.size()){
                r_count++;
            }
        }
        return r_count;
    }
};