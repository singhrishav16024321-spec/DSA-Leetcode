class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi= 0; int sumt=0;
        for(int i=0;i<weights.size();i++){
            maxi= max(maxi,weights[i]);
            sumt+= weights[i]; 
        }
        int low=maxi; int high=sumt; int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int daysreq= countdays(weights,mid);
            if(daysreq<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int countdays(vector<int> weights , int capacity){
        int cday =1; int load=0;
        for(int i=0;i<weights.size();i++){
            if(load + weights[i]>capacity){
                cday++;
                load =weights[i];
            }
            else{
                load+= weights[i];
            }
        }
        return cday;
    }
};